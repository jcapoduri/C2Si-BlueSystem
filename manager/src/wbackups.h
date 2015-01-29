#ifndef WBACKUPS_H
#define WBACKUPS_H

#include <QWidget>
#include <QMessageBox>
#include <QDir>

namespace Ui {
class wBackups;
}

class wBackups : public QWidget
{
    Q_OBJECT
    
public:
    explicit wBackups(QWidget *parent = 0);
    ~wBackups();
    
protected slots:
    void    createBk();
    void    applyBk();
    void    deleteBk();

    void    refreshBk();
private:
    Ui::wBackups *ui;
    QString     t_folder;
};

#endif // WBACKUPS_H
