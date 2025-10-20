#ifndef CBUILTINBLG_H
#define CBUILTINBLG_H

#include <QDialog>
#include <QPushButton>
#include <QTextEdit>

class cbuiltinblg : public QDialog
{
    Q_OBJECT

public:
    cbuiltinblg(QWidget *parent = nullptr);
    ~cbuiltinblg();
private:
    QTextEdit*     displayTextEdit;
    QPushButton*   colorPushBtn;
    QPushButton*   errorPushBtn;
    QPushButton*   filePushBtn;
    QPushButton*   fontPushBtn;
    QPushButton*   inputPushBtn;
    QPushButton*   pagePushBtn;
    QPushButton*   progressPushBtn;
    QPushButton*   printPushBtn;
};
#endif // CBUILTINBLG_H
