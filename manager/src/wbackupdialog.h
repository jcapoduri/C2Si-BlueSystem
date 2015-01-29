#ifndef WBACKUPDIALOG_H
#define WBACKUPDIALOG_H

#include <QDialog>
#include <QFile>
#include <QNetworkAccessManager>

namespace Ui {
class wBackupDialog;
}

class wBackupDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit wBackupDialog(QFile* fl = 0, QWidget *parent = 0);
    ~wBackupDialog();

    bool    cloudBackup();

protected slots:
    void    doBackup();
    void    restoreBackup();
    void    replyFinish(QNetworkReply *reply);
    void    progressMade(qint64 val = 0, qint64 max = 0);
    void    log(QString txt);

private:
    Ui::wBackupDialog*      ui;
    QFile*                  t_file;
    QNetworkAccessManager*  manager;
};

#endif // WBACKUPDIALOG_H
