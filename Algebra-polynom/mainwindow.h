#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include <string>
#include "Algebra-polynom/Polynom/Polynom.h"
#include "Algebra-polynom/Polynom/GaloisField.h"
#include "Algebra-polynom/utils.h"

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

    void on_makeFieldButton_clicked();

    void on_primeBox_valueChanged(int arg1);

    void on_powerBox_valueChanged(int arg1);

    void on_allirrPol_clicked();

private:
    Ui::MainWindow *ui;
    GaloisField Field;
    bool fieldCreated = false;
    bool canCerateField = true;
    void addIrrPolList();

};
#endif // MAINWINDOW_H
