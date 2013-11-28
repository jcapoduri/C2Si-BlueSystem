#include "jsonmodelview.h"
#include <QDebug>
#include <QStringList>

JSONModelView::JSONModelView(QObject *parent) :
    QAbstractItemModel(parent)
{
}

JSONModelView::JSONModelView(QJsonValue &val, QObject *parent) : QAbstractItemModel(parent)
{
    if (val.isArray()) this->root_item = val.toArray();
}

JSONModelView::JSONModelView(QJsonDocument &doc, QObject *parent) : QAbstractItemModel(parent)
{
    if (doc.isArray()) this->root_item = doc.array();
}

JSONModelView::~JSONModelView()
{
}

QVariant JSONModelView::data(const QModelIndex &index, int role) const
{
    QJsonValue val;

    if (!index.isValid())
        return QVariant();

    if (role != Qt::DisplayRole){
        return QVariant();
    };

    val = this->root_item.at(index.row());
    if(val.isArray()){
        return val.toArray().at(index.column());
    } else {
        QJsonObject obj = val.toObject();
        return obj.value(obj.keys().at(index.column()));
    }
}

Qt::ItemFlags JSONModelView::flags(const QModelIndex &index) const
{
    if (!index.isValid())
        return 0;

    return Qt::ItemIsEnabled | Qt::ItemIsSelectable;
}

QVariant JSONModelView::headerData(int section, Qt::Orientation orientation, int role) const
{
    QJsonValue val;
    if (orientation == Qt::Horizontal && role == Qt::DisplayRole) {
        val = this->root_item.at(0);
        if(val.isUndefined()) return QVariant();
        if(val.isArray()){
            return val.toArray().at(section);
        } else {
            QJsonObject obj = val.toObject();
            return obj.value(obj.keys().at(section));
        }
    };

    return QVariant();
}

QModelIndex JSONModelView::index(int row, int column, const QModelIndex &parent) const
{
    QJsonValue  val;
    val = this->root_item.at(row);
    if (val.isUndefined()) return QModelIndex();

    if (val.isArray()){
        val = val.toArray().at(column);
    } else {
        QJsonObject obj = val.toObject();
        val = obj.value(obj.keys().at(column));
    };

    return createIndex(row, column, &val);
}

QModelIndex JSONModelView::parent(const QModelIndex &index) const
{
    //if (!index.isValid())
        return QModelIndex();

    /*treeItem *childItem = static_cast<treeItem*>(index.internalPointer());
    treeItem *parentItem = childItem->parent();

    if (parentItem == rootItem)
        return QModelIndex();

    return createIndex(parentItem->row(), 0, parentItem);*/
}

int JSONModelView::rowCount(const QModelIndex &parent) const
{
    if (parent.column() > 0)
        return 0;

    return root_item.count();
}

int JSONModelView::columnCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return this->root_item.at(parent.row()).toArray().count();
    else {
        if (root_item.count())
            return root_item.at(0).toArray().count();
        else
            return 0;
     };
}

void JSONModelView::setJSON(QJsonValue &val)
{
}

void JSONModelView::setJSON(QJsonDocument &doc)
{
}



//------------------------------------------------------------------------------------------------------------------
/*productsModel::productsModel(QSqlDatabase db, QObject *parent)
    : QAbstractItemModel(parent)
{
    QList<QVariant> rootData;
    //rootData << "Codigo" << "Descripcion" << "Linea" << "Sublinea" << "Gravado" << "Alicuota" << "Oferta" << "Equivalencia";
    rootData << "codigo" << "cod. original" << "=" << "descripcion"  << "precio venta" << "precio lista" << "precio costo" << "oferta" << "stock" << "alicuota" << "unidad de venta" << "marca" << "rubro";
    rootItem = new treeItem(rootData);
    searchByCodigo = true;
    searchByMarca = true;
    searchByDesc = true;
    searchByCodOriginal = true;
    searchByOferta = false;
    marcaString = "[ Todos ]";
    rubroString = "[ Todos ]";
    this->db = db;
    //setupModelData(rootItem);
}

productsModel::~productsModel()
{
    delete rootItem;
}

int productsModel::columnCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return static_cast<treeItem*>(parent.internalPointer())->columnCount();
    else
        return rootItem->columnCount();
}

QVariant productsModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (role != Qt::DisplayRole){
        if(role == Qt::BackgroundRole){
            if(index.column() == 7){
                treeItem *item = static_cast<treeItem*>(index.internalPointer());
                if(item->data(7).toString() == "si") {
                    return Qt::green;
                }else{
                    return QVariant();
                };
            }else{
                return QVariant();
            };
        }else{
            return QVariant();
        };
    };


    treeItem *item = static_cast<treeItem*>(index.internalPointer());

    return item->data(index.column());
}

Qt::ItemFlags productsModel::flags(const QModelIndex &index) const
{
    if (!index.isValid())
        return 0;

    return Qt::ItemIsEnabled | Qt::ItemIsSelectable;
}

QVariant productsModel::headerData(int section, Qt::Orientation orientation,
                               int role) const
{
    if (orientation == Qt::Horizontal && role == Qt::DisplayRole)
        return rootItem->data(section);

    return QVariant();
}

QModelIndex productsModel::index(int row, int column, const QModelIndex &parent)
            const
{
    if (!hasIndex(row, column, parent))
        return QModelIndex();

    treeItem *parentItem;

    if (!parent.isValid())
        parentItem = rootItem;
    else
        parentItem = static_cast<treeItem*>(parent.internalPointer());

    treeItem *childItem = parentItem->child(row);
    if (childItem)
        return createIndex(row, column, childItem);
    else
        return QModelIndex();
}

QModelIndex productsModel::parent(const QModelIndex &index) const
{
    if (!index.isValid())
        return QModelIndex();

    treeItem *childItem = static_cast<treeItem*>(index.internalPointer());
    treeItem *parentItem = childItem->parent();

    if (parentItem == rootItem)
        return QModelIndex();

    return createIndex(parentItem->row(), 0, parentItem);
}

int productsModel::rowCount(const QModelIndex &parent) const
{
    treeItem *parentItem;
    if (parent.column() > 0)
        return 0;

    if (!parent.isValid())
        parentItem = rootItem;
    else
        parentItem = static_cast<treeItem*>(parent.internalPointer());

    return parentItem->childCount();
}

void productsModel::setupModelData(treeItem *parent, QString order)
{
    QSqlQuery *query = new QSqlQuery(db);
    double precio;
    QSettings sets("config.ini", QSettings::IniFormat);
    sets.beginGroup("user");
    QStringList filterList;
    /*if(searchByCodigo) filterList << " codigo LIKE '%"+ queryString +"%' " ;
    if(searchByCodOriginal) filterList << " codoriginal LIKE '%" + queryString + "%'";
    if(searchByMarca) filterList << " linea LIKE '%"+ queryString +"%' " ;
    if(searchByDesc) filterList << " descripcion LIKE '%"+ queryString +"%' " ;
    QString filter = filterList.join(" OR ");
    if(searchByOferta) filter = "("+filter+ ") AND gravoferta > 0";

    if(marcaString != "[ Todos ]"){
        //if(filter != "") filter += " AND ";
        //filter += "sublinea LIKE '" + marcaString + "'";
        filter = "("+ filter +") AND sublinea LIKE '" + marcaString + "'";
    };
    if(rubroString != "[ Todos ]"){
        //if(filter != "") filter += " AND ";
        //filter += "linea LIKE '" + rubroString + "'";
        filter = "(" + filter + ") AND linea LIKE '" + rubroString + "'";
    };

    /*if(filter != ""){
        query->exec("SELECT * FROM catalogo WHERE " + filter);
    }else{
        query->exec("SELECT * FROM catalogo");
    };*/

    /*if(filter != ""){
        query->exec("SELECT count(*) as t FROM catalogo WHERE " + filter);
    }else{
        query->exec("SELECT count(*) as t FROM catalogo");
    };

    query->next();*

    //if(query->record().field("t").value().toInt() == 0){
    if(queryString != ""){
        // nuevo metodo, parto la busqueda por secciones
        QStringList queryStringList;
        queryStringList = queryString.split(" ", QString::SkipEmptyParts);
        queryStringList.removeDuplicates();

        if(searchByCodigo){
            QStringList queryStringCodigoList;
            for(int i = 0; i < queryStringList.size(); i++){
                queryStringCodigoList << "(codigo LIKE '%" + queryStringList.at(i) + "%') " ;
            };
            //filterList << " codigo LIKE '%"+ queryString +"%' " ;
            filterList << "(" + queryStringCodigoList.join(" OR ") + ")";
        };

        if(searchByCodOriginal){
            QStringList queryStringCodigoList;
            for(int i = 0; i < queryStringList.size(); i++){
                queryStringCodigoList << "(codoriginal LIKE '%" + queryStringList.at(i) + "%') " ;
            };
            //filterList << " codoriginal LIKE '%"+ queryString +"%' " ;
            filterList << "(" + queryStringCodigoList.join(" OR ") + ")";
        };
        //filterList << " codoriginal LIKE '%" + queryString + "%'";

        if(searchByMarca){
            QStringList queryStringCodigoList;
            for(int i = 0; i < queryStringList.size(); i++){
                queryStringCodigoList << "(linea LIKE '%" + queryStringList.at(i) + "%') " ;
            };
            //filterList << " codigo LIKE '%"+ queryString +"%' " ;
            filterList << "(" + queryStringCodigoList.join(" AND ") + ")";
        };
        //filterList << " linea LIKE '%"+ queryString +"%' " ;

        if(searchByDesc){
            QStringList queryStringCodigoList;
            for(int i = 0; i < queryStringList.size(); i++){
                queryStringCodigoList << "(descripcion LIKE '%" + queryStringList.at(i) + "%') " ;
            };
            //filterList << " codigo LIKE '%"+ queryString +"%' " ;
            filterList << "(" + queryStringCodigoList.join(" AND ") + ")";
        };
        //filterList << " descripcion LIKE '%"+ queryString +"%' " ;

        QString filter = filterList.join(" OR ");
        if(searchByOferta) filter = "("+filter+ ") AND gravoferta > 0";

        if(marcaString != "[ Todos ]"){
            //if(filter != "") filter += " AND ";
            //filter += "sublinea LIKE '" + marcaString + "'";
            filter = "("+ filter +") AND sublinea LIKE '" + marcaString + "'";
        };
        if(rubroString != "[ Todos ]"){
            //if(filter != "") filter += " AND ";
            //filter += "linea LIKE '" + rubroString + "'";
            filter = "(" + filter + ") AND linea LIKE '" + rubroString + "'";
        };

        query->exec("SELECT * FROM catalogo WHERE " + filter);
    }else{
        QStringList filterlist;
        if(searchByOferta) filterlist << "(gravoferta > 0)";

        if(marcaString != "[ Todos ]"){
            filterlist << "(sublinea LIKE '" + marcaString + "')";
        };
        if(rubroString != "[ Todos ]"){
            filterlist << "(linea LIKE '" + rubroString + "')";
        };

        query->exec("SELECT * FROM catalogo" + ((!filterlist.empty())? " WHERE " + filterlist.join(" AND ") : ""));
    };



    qDebug() << query->lastQuery() << query->lastError();
    while(query->next()){
        /*QList<QVariant> data;
        data << query->record().field("codigo").value().toString();
        data << query->record().field("descripcion").value().toString();
        data << query->record().field("linea").value().toString();
        data << query->record().field("sublinea").value().toString();
        data << query->record().field("gravado").value().toDouble();
        data << query->record().field("alicuota").value().toDouble();
        data << ((query->record().field("validez").value().toDate() > QDate::currentDate()) ? "si" : "no");
        data << ((query->record().field("codequi").value().toInt() != 0) ? "=" : "");
        //if(query->record().field("codequi").value().toInt() != 0) qDebug() << data;
        treeItem *item = new treeItem(data, 0, parent);
        parent->appendChild(item);*
        QList<QVariant> data;
        precio = (double)((int)((query->record().field("gravado").value().toDouble() * (1 - (sets.value("g3Discount").toDouble() / 100))) * 100 +.5)) / 100;
        if(sets.value("g3Doscount2", 0).toInt() == 0) precio = (double)((int)((precio * (1 - (sets.value("g3Discount2").toDouble() / 100))) * 100 +.5)) / 100;
        if(sets.value("g3Doscount3", 0).toInt() == 0) precio = (double)((int)((precio * (1 - (sets.value("g3Discount3").toDouble() / 100))) * 100 +.5)) / 100;
        //precio = precio * (1 + (query->record().field("alicuota").value().toDouble() / 100));

        data << query->record().field("codigo").value().toString();
        data << query->record().field("codoriginal").value().toString();
        data << ((query->record().field("codequi").value().toInt() != 0) ? "=" : "");
        data << query->record().field("descripcion").value().toString();
        double preciopub = (double)((int)((precio * (1 + (sets.value("rechargeForPublic").toDouble() / 100))) * 100 +.5)) / 100;
        if(sets.value("IVAincluded").toBool()) preciopub = (double)((int)((preciopub * (1 + (query->record().field("alicuota").value().toDouble() / 100))) * 100 +.5)) / 100;
        data << preciopub;
        //data << (double)((int)((precio * (1 + (sets.value("rechargeForPublic").toDouble() / 100))) * 100 +.5)) / 100;
        data << query->record().field("gravado").value().toDouble();
        data << precio;
        data << ((query->record().field("gravoferta").value().toDouble() > 0) ? "si" : "no");
        data << ((query->record().field("stock").value().toInt() > 0) ? "si" : "no");
        //data << query->record().field("gravado").value().toDouble();
        data << query->record().field("alicuota").value().toDouble();
        data << query->record().field("embalaje").value().toString();
        data << query->record().field("sublinea").value().toString();
        data << query->record().field("linea").value().toString();
        //qDebug() << data;
        //if(query->record().field("codequi").value().toInt() != 0) qDebug() << data;


        //treeItem *item = new treeItem(data, 0, rootItem);
        //rootItem->appendChild(item);
        //qDebug() << "before append";
        rootItem->appendChild(new treeItem(data, 0, rootItem));
        //qDebug() << "after append";
    };
    delete query;
}
*/
