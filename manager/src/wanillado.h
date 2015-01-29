#ifndef WANILLADO_H
#define WANILLADO_H

#include <QDialog>
#include "anillado.h"

namespace Ui {
class wanillado;
}

class wanillado : public QDialog
{
    Q_OBJECT
    
public:
    explicit wanillado(anillado *an = 0, QWidget *parent = 0);
    ~wanillado();
public slots:
    void    save();
    void    cancel();

signals:
    void    anilladoAdded(anillado*);
private:
    bool            toAdd;
    anillado        *t_anillado;
    Ui::wanillado   *ui;
};

#endif // WANILLADO_H
