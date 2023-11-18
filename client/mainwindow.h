#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <QTcpSocket>
#include <QByteArray>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include "structures.h"
#include "dataHandler.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

protected:
    QTcpSocket * socket {nullptr};
    bool loginExists;
    bool password;
    void connection();
    void socketConnected();
    void receivePacket();
    void checkLoginUser();
    void signUpUser();
    void loginUser();
    void sendLogin(QString login);
    void sendPassword(QString password);
    void sendLoginToLogin(QString login);
    void sendPasswordToLogin(QString password);
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H