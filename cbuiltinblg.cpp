#include "cbuiltinblg.h"
#include <QGridLayout>
cbuiltinblg::cbuiltinblg(QWidget *parent)
    : QDialog(parent)
{
    QGridLayout* gridLayout = new QGridLayout(this);
    displayTextEdit  = new QTextEdit(QStringLiteral("Qt的標準圖形對話盒"));
    colorPushBtn     = new QPushButton(QStringLiteral("顏色對話盒"));
    errorPushBtn     = new QPushButton(QStringLiteral("錯誤訊息對話盒"));
    filePushBtn      = new QPushButton(QStringLiteral("檔案對話盒"));
    fontPushBtn      = new QPushButton(QStringLiteral("字型對話盒"));
    inputPushBtn     = new QPushButton(QStringLiteral("輸入對話盒"));
    pagePushBtn      = new QPushButton(QStringLiteral("頁面設定對話盒"));
    progressPushBtn  = new QPushButton(QStringLiteral("進度對話盒"));
    printPushBtn     = new QPushButton(QStringLiteral("列印對話盒"));
}

cbuiltinblg::~cbuiltinblg() {}
