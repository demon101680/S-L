#include "calculator.h"
#include "ui_calculator.h"

#define K (0.017453292519943295769236907684886l)
#include <math.h>
Calculator::Calculator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
    ui->display->setAlignment(Qt::AlignCenter);
}

Calculator::~Calculator()
{
    delete ui;

}


void Calculator::on_Button9_clicked()
{
    int digitValue = ui->Button9->text().toInt();
    if (ui->display->text()=="0"&& digitValue == 0.0)
        return;

    if (waitingForOperand) {
        ui->display->clear();
        waitingForOperand = false;
    }
    ui->display->setText(ui->display->text() + QString::number(digitValue));
}

void Calculator::on_Button8_clicked()
{
    int digitValue = ui->Button8->text().toInt();
    if (ui->display->text()=="0"&& digitValue == 0.0)
        return;

    if (waitingForOperand) {
        ui->display->clear();
        waitingForOperand = false;
    }
    ui->display->setText(ui->display->text() + QString::number(digitValue));
}

void Calculator::on_Button7_clicked()
{
    int digitValue = ui->Button7->text().toInt();
    if (ui->display->text()=="0"&& digitValue == 0.0)
        return;

    if (waitingForOperand) {
        ui->display->clear();
        waitingForOperand = false;
    }
    ui->display->setText(ui->display->text() + QString::number(digitValue));
}

void Calculator::on_Button6_clicked()
{
    int digitValue = ui->Button6->text().toInt();
    if (ui->display->text()=="0"&& digitValue == 0.0)
        return;

    if (waitingForOperand) {
        ui->display->clear();
        waitingForOperand = false;
    }
    ui->display->setText(ui->display->text() + QString::number(digitValue));
}

void Calculator::on_Button5_clicked()
{
    int digitValue = ui->Button5->text().toInt();
    if (ui->display->text()=="0"&& digitValue == 0.0)
        return;

    if (waitingForOperand) {
        ui->display->clear();
        waitingForOperand = false;
    }
    ui->display->setText(ui->display->text() + QString::number(digitValue));
}

void Calculator::on_Button4_clicked()
{
    int digitValue = ui->Button4->text().toInt();
    if (ui->display->text()=="0"&& digitValue == 0.0)
        return;

    if (waitingForOperand) {
        ui->display->clear();
        waitingForOperand = false;
    }
    ui->display->setText(ui->display->text() + QString::number(digitValue));
}

void Calculator::on_Button3_clicked()
{
    int digitValue = ui->Button3->text().toInt();
    if (ui->display->text()=="0"&& digitValue == 0.0)
        return;

    if (waitingForOperand) {
        ui->display->clear();
        waitingForOperand = false;
    }
    ui->display->setText(ui->display->text() + QString::number(digitValue));
}

void Calculator::on_Button2_clicked()
{
    int digitValue = ui->Button2->text().toInt();
    if (ui->display->text()=="0"&& digitValue == 0.0)
        return;

    if (waitingForOperand) {
        ui->display->clear();
        waitingForOperand = false;
    }
    ui->display->setText(ui->display->text() + QString::number(digitValue));
}

void Calculator::on_Button1_clicked()
{
    int digitValue = ui->Button1->text().toInt();
    if (ui->display->text()=="0"&& digitValue == 0.0)
        return;

    if (waitingForOperand) {
        ui->display->clear();
        waitingForOperand = false;
    }
    ui->display->setText(ui->display->text() + QString::number(digitValue));
}

void Calculator::on_Button0_clicked()
{
    int digitValue = ui->Button0->text().toInt();
    if (ui->display->text()=="0"&& digitValue == 0.0)
        return;

    if (waitingForOperand) {
        ui->display->clear();
        waitingForOperand = false;
    }
    ui->display->setText(ui->display->text() + QString::number(digitValue));
}

void Calculator::on_SqrtButton_clicked()
{
    QString clickedOperator = ui->SqrtButton->text();
    double operand = ui->display->text().toDouble();
    double result = 0.0;

    if (clickedOperator == tr("Sqrt")) {
        if (operand < 0.0) {
            abortOperation();
            return;
        }
        result = sqrt(operand);
    }
    ui->display->setText(QString::number(result));
    waitingForOperand = true;
}
void Calculator::abortOperation()
{
    on_ClearAllButton_clicked();
    ui->display->setText(tr("####"));
}
/*void Calculator::clearAll()
{
    sumSoFar = 0.0;
    factorSoFar = 0.0;
    pendingAdditiveOperator.clear();
    pendingMultiplicativeOperator.clear();
    ui->display->setText("0");
    waitingForOperand = true;
}
*/
void Calculator::on_pingfangButton_clicked()
{
    QString clickedOperator = ui->pingfangButton->text();
    double operand = ui->display->text().toDouble();
    double result = 0.0;

    if (clickedOperator == tr("x\262")) {
        result = pow(operand, 2.0);
    }
    ui->display->setText(QString::number(result));
    waitingForOperand = true;
}

void Calculator::on_daoshuButton_clicked()
{
    QString clickedOperator = ui->daoshuButton->text();
    double operand = ui->display->text().toDouble();
    double result = 0.0;

     if (clickedOperator == tr("1/x")) {
        if (operand == 0.0) {
            abortOperation();
            return;
        }
        result = 1.0 / operand;
    }
    ui->display->setText(QString::number(result));
    waitingForOperand = true;
}

void Calculator::on_equButton_clicked()
{

    double operand = ui->display->text().toDouble();

    if (!pendingMultiplicativeOperator.isEmpty()) {
        if (!calculate(operand, pendingMultiplicativeOperator)) {
            abortOperation();
            return;
        }
        operand = factorSoFar;
        factorSoFar = 0.0;
        pendingMultiplicativeOperator.clear();
    }
    if (!pendingAdditiveOperator.isEmpty()) {
        if (!calculate(operand, pendingAdditiveOperator)) {
            abortOperation();
            return;
        }
        pendingAdditiveOperator.clear();
    } else {
        sumSoFar = operand;
    }

    ui->display->setText(QString::number(sumSoFar));
    sumSoFar = 0.0;
    waitingForOperand = true;
}
bool Calculator::calculate(double rightOperand, const QString &pendingOperator)
{
    if (pendingOperator == tr("+")) {
        sumSoFar += rightOperand;
    } else if (pendingOperator == tr("-")) {
        sumSoFar -= rightOperand;
    }else if (pendingOperator == tr("yrx")) {
        //factorSoFar *= rightOperand;
        factorSoFar=pow(rightOperand,double(1/factorSoFar));
    }else if (pendingOperator == tr("xy")) {
        //factorSoFar *= rightOperand;
        factorSoFar=pow(factorSoFar,rightOperand);
    }else if (pendingOperator == tr("mod")) {
        //factorSoFar *= rightOperand;
      factorSoFar=fmod(factorSoFar,rightOperand);
    }
    else if (pendingOperator == tr("*")) {
        //factorSoFar=pow(rightOperand,double(1/factorSoFar));
       factorSoFar *= rightOperand;
    } else if (pendingOperator == tr("\367")) {
        if (rightOperand == 0.0)
            return false;
        factorSoFar /= rightOperand;
    }
    return true;
}

void Calculator::on_divButton_clicked()
{

    QString clickedOperator = ui->divButton->text();
    double operand = ui->display->text().toDouble();

    if (!pendingMultiplicativeOperator.isEmpty()) {
        if (!calculate(operand, pendingMultiplicativeOperator)) {
            abortOperation();
            return;
        }
        ui->display->setText(QString::number(factorSoFar));
    } else {
        factorSoFar = operand;
    }

    pendingMultiplicativeOperator = clickedOperator;
    waitingForOperand = true;
}

void Calculator::on_mulButton_clicked()
{
    QString clickedOperator = ui->mulButton->text();
    double operand = ui->display->text().toDouble();

    if (!pendingMultiplicativeOperator.isEmpty()) {
        if (!calculate(operand, pendingMultiplicativeOperator)) {
            abortOperation();
            return;
        }
        ui->display->setText(QString::number(factorSoFar));
    } else {
        factorSoFar = operand;
    }

    pendingMultiplicativeOperator = clickedOperator;
    waitingForOperand = true;
}

void Calculator::on_decButton_clicked()
{


    QString clickedOperator = ui->decButton->text();
    double operand = ui->display->text().toDouble();

//! [11] //! [12]
    if (!pendingMultiplicativeOperator.isEmpty()) {
//! [12] //! [13]
        if (!calculate(operand, pendingMultiplicativeOperator)) {
            abortOperation();
            return;
        }
        ui->display->setText(QString::number(factorSoFar));
        operand = factorSoFar;
        factorSoFar = 0.0;
        pendingMultiplicativeOperator.clear();
    }

//! [13] //! [14]
    if (!pendingAdditiveOperator.isEmpty()) {
//! [14] //! [15]
        if (!calculate(operand, pendingAdditiveOperator)) {
            abortOperation();
            return;
        }
        ui->display->setText(QString::number(sumSoFar));
    } else {
        sumSoFar = operand;
    }

//! [15] //! [16]
    pendingAdditiveOperator = clickedOperator;
//! [16] //! [17]
    waitingForOperand = true;
}

void Calculator::on_addButton_clicked()
{

    QString clickedOperator = ui->addButton->text();
    double operand = ui->display->text().toDouble();

//! [11] //! [12]
    if (!pendingMultiplicativeOperator.isEmpty()) {
//! [12] //! [13]
        if (!calculate(operand, pendingMultiplicativeOperator)) {
            abortOperation();
            return;
        }
        ui->display->setText(QString::number(factorSoFar));
        operand = factorSoFar;
        factorSoFar = 0.0;
        pendingMultiplicativeOperator.clear();
    }

//! [13] //! [14]
    if (!pendingAdditiveOperator.isEmpty()) {
//! [14] //! [15]
        if (!calculate(operand, pendingAdditiveOperator)) {
            abortOperation();
            return;
        }
        ui->display->setText(QString::number(sumSoFar));
    } else {
        sumSoFar = operand;
    }

//! [15] //! [16]
    pendingAdditiveOperator = clickedOperator;
//! [16] //! [17]
    waitingForOperand = true;
}

void Calculator::on_doubleButton_clicked()
{

    QString text = ui->display->text();
    double value = text.toDouble();

    if (value > 0.0) {
        text.prepend(tr("-"));
    } else if (value < 0.0) {
        text.remove(0, 1);
    }
    ui->display->setText(text);
}

void Calculator::on_dotButton_clicked()
{
    if (waitingForOperand)
        ui->display->setText("0");
    if (!ui->display->text().contains("."))
        ui->display->setText(ui->display->text() + tr("."));
    waitingForOperand = false;
}

void Calculator::on_MCButton_clicked()
{
    sumInMemory = 0.0;
}

void Calculator::on_MRButton_clicked()
{
    ui->display->setText(QString::number(sumInMemory));
    waitingForOperand = true;
}

void Calculator::on_MSButton_clicked()
{
    on_equButton_clicked();
    sumInMemory = ui->display->text().toDouble();
}

void Calculator::on_MPlusButton_clicked()
{
    on_equButton_clicked();
    sumInMemory += ui->display->text().toDouble();
}

void Calculator::on_ClearAllButton_clicked()
{
    sumSoFar = 0.0;
    factorSoFar = 0.0;
    pendingAdditiveOperator.clear();
    pendingMultiplicativeOperator.clear();
    ui->display->setText("0");
    waitingForOperand = true;
}

void Calculator::on_ClearButton_clicked()
{
    if (waitingForOperand)
        return;

    ui->display->setText("0");
    waitingForOperand = true;
}

void Calculator::on_BackSpaceButton_clicked()
{

    if (waitingForOperand)
        return;

    QString text = ui->display->text();
    text.chop(1);
    if (text.isEmpty()) {
        text = "0";
        waitingForOperand = true;
    }
    ui->display->setText(text);
}

void Calculator::on_jiechengButton_clicked()
{
    QString clickedOperator = ui->jiechengButton->text();
    double operand = ui->display->text().toDouble();
    double result = 0.0;

    if (clickedOperator == tr("n!")) {
        if (operand < 0.0) {
            abortOperation();
            return;
        }
        if(operand==0.0){
        result=1;
    }else{
        result=1;
        for(int i=1;i<=operand;i++){
        result*=i;
        }
    }

    }
    ui->display->setText(QString::number(result));
    waitingForOperand = true;
}

void Calculator::on_fanggenButton_clicked()
{
    QString clickedOperator = ui->fanggenButton->text();
    double operand = ui->display->text().toDouble();

    if (!pendingMultiplicativeOperator.isEmpty()) {
        if (!calculate(operand, pendingMultiplicativeOperator)) {
            abortOperation();
            return;
        }
        ui->display->setText(QString::number(factorSoFar));
    } else {
        factorSoFar = operand;
    }

    pendingMultiplicativeOperator = clickedOperator;
    waitingForOperand = true;
}

void Calculator::on_lifanggenButton_clicked()
{
    QString clickedOperator = ui->lifanggenButton->text();
    double operand = ui->display->text().toDouble();
    double result = 0.0;

    if (clickedOperator == tr("3rx")) {
        result = pow(operand, double(1.0/3));
    }
    ui->display->setText(QString::number(result));
    waitingForOperand = true;
}

void Calculator::on_zhishuButton_clicked()
{
    QString clickedOperator = ui->zhishuButton->text();
    double operand = ui->display->text().toDouble();
    double result = 0.0;

    if (clickedOperator == tr("10x")) {
        result = pow(10, operand);
    }
    ui->display->setText(QString::number(result));
    waitingForOperand = true;
}

void Calculator::on_pingfangButton_2_clicked()
{
    QString clickedOperator = ui->pingfangButton_2->text();
    double operand = ui->display->text().toDouble();
    double result = 0.0;

    if (clickedOperator == tr("x\262")) {
        result = pow(operand, 2.0);
    }
    ui->display->setText(QString::number(result));
    waitingForOperand = true;
}

void Calculator::on_xyButton_clicked()
{
    QString clickedOperator = ui->xyButton->text();
    double operand = ui->display->text().toDouble();

    if (!pendingMultiplicativeOperator.isEmpty()) {
        if (!calculate(operand, pendingMultiplicativeOperator)) {
            abortOperation();
            return;
        }
        ui->display->setText(QString::number(factorSoFar));
    } else {
        factorSoFar = operand;
    }

    pendingMultiplicativeOperator = clickedOperator;
    waitingForOperand = true;
}

void Calculator::on_lifangButton_clicked()
{
    QString clickedOperator = ui->lifangButton->text();
    double operand = ui->display->text().toDouble();
    double result = 0.0;

    if (clickedOperator == tr("x3")) {
        result = pow(operand, 3.0);
    }
    ui->display->setText(QString::number(result));
    waitingForOperand = true;
}

void Calculator::on_duishuButton_clicked()
{
    QString clickedOperator = ui->duishuButton->text();
    double operand = ui->display->text().toDouble();
    double result = 0.0;

    if (clickedOperator == tr("lg")) {
        result = log(operand)/log(10.0);
    }
    ui->display->setText(QString::number(result));
    waitingForOperand = true;
}

void Calculator::on_sinButton_clicked()
{
    QString clickedOperator = ui->sinButton->text();
    double operand = ui->display->text().toDouble();
    double result = 0.0;

    if (clickedOperator == tr("sin")) {
        result = sin(operand*(double K));
    }
    ui->display->setText(QString::number(result));
    waitingForOperand = true;
}

void Calculator::on_cosButton_clicked()
{
    QString clickedOperator = ui->cosButton->text();
    double operand = ui->display->text().toDouble();
    double result = 0.0;

    if (clickedOperator == tr("cos")) {
        result = cos(operand*(double K));
    }
    ui->display->setText(QString::number(result));
    waitingForOperand = true;
}

void Calculator::on_tanButton_clicked()
{
    QString clickedOperator = ui->tanButton->text();
    double operand = ui->display->text().toDouble();
    double result = 0.0;

    if (clickedOperator == tr("tan")) {
        result = sin(operand*(double K))/cos(operand*(double K));
    }
    ui->display->setText(QString::number(result));
    waitingForOperand = true;
}

void Calculator::on_modButton_clicked()
{
    QString clickedOperator = ui->modButton->text();
    double operand = ui->display->text().toDouble();

    if (!pendingMultiplicativeOperator.isEmpty()) {
        if (!calculate(operand, pendingMultiplicativeOperator)) {
            abortOperation();
            return;
        }
        ui->display->setText(QString::number(factorSoFar));
    } else {
        factorSoFar = operand;
    }

    pendingMultiplicativeOperator = clickedOperator;
    waitingForOperand = true;
}
