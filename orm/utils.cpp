#include <QDateTime>
#include <QRegExp>
#include "utils.h"

using namespace nd;

utils::utils()
{
}

QString utils::sanitize(QString value){
    return value;
}

QString utils::toSqlValue(QVariant value)
{
    QString toret;
    bool ok;
    value.toDouble(&ok);
    if(ok){
        toret = QString::number(value.toDouble());
    }else{
        QDateTime d = value.toDateTime();
        if(d.isValid()){
            toret = "'" + value.toDateTime().toString("yyyy-MM-dd hh:mm:ss") + "'";
        }else{
            toret = "'" + value.toString() + "'";
        };
    };
    return toret;
}

QString utils::addslashes(QString value)
{
    QString toRet = "";
    toRet = value.replace("\\", "\\\\");
    toRet = toRet.replace("\"", "\\\"");
    toRet = toRet.replace("\'", "\\\'");
    toRet = toRet.replace("\n", "\\n");
    return toRet;
}
