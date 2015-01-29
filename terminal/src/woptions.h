#ifndef WOPTIONS_H
#define WOPTIONS_H

#include <QDialog>
#include "user.h"

namespace Ui {
class woptions;
}

class woptions : public QDialog
{
    Q_OBJECT
    
public:
    explicit woptions(user* u, QWidget *parent = 0);
    ~woptions();
private slots:
    void    save();
    void    cancel();
    void    resetPassword();
    void    resetShortPassword();

private:
    bool checkPassword();
    Ui::woptions *ui;
    user         *t_user;
};

#endif // WOPTIONS_H
