#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>

namespace Ui {
    class Calculator;
}

class Calculator : public QWidget
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = 0);
    ~Calculator();

private:
    Ui::Calculator *ui;
bool waitingForOperand;
void abortOperation();
void clearAll();
double sumInMemory;
//! [3] //! [4]
double sumSoFar;
//! [4] //! [5]
double factorSoFar;
//! [5] //! [6]
QString pendingAdditiveOperator;
//! [6] //! [7]
QString pendingMultiplicativeOperator;
bool calculate(double rightOperand, const QString &pendingOperator);
//! [2]
private slots:
    void on_modButton_clicked();
    void on_tanButton_clicked();
    void on_cosButton_clicked();
    void on_sinButton_clicked();
    void on_duishuButton_clicked();
    void on_lifangButton_clicked();
    void on_xyButton_clicked();
    void on_pingfangButton_2_clicked();
    void on_zhishuButton_clicked();
    void on_lifanggenButton_clicked();
    void on_fanggenButton_clicked();
    void on_jiechengButton_clicked();
    void on_BackSpaceButton_clicked();
    void on_ClearButton_clicked();
    void on_ClearAllButton_clicked();
    void on_MPlusButton_clicked();
    void on_MSButton_clicked();
    void on_MRButton_clicked();
    void on_MCButton_clicked();
    void on_dotButton_clicked();
    void on_doubleButton_clicked();
    void on_addButton_clicked();
    void on_decButton_clicked();
    void on_mulButton_clicked();
    void on_divButton_clicked();
    void on_equButton_clicked();
    void on_daoshuButton_clicked();
    void on_pingfangButton_clicked();
    void on_SqrtButton_clicked();
    void on_Button0_clicked();
    void on_Button1_clicked();
    void on_Button2_clicked();
    void on_Button3_clicked();
    void on_Button4_clicked();
    void on_Button5_clicked();
    void on_Button6_clicked();
    void on_Button7_clicked();
    void on_Button8_clicked();
    void on_Button9_clicked();
};

#endif // CALCULATOR_H
