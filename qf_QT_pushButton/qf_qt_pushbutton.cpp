#include "qf_qt_pushbutton.h"
#include <QPushButton>
#include <QDebug>
qf_QT_pushButton::qf_QT_pushButton(QWidget *parent):QPushButton(parent)
{

}

void qf_QT_pushButton::qf_setPosition(int x, int y)
{
    move(x, y);
}
void qf_QT_pushButton::qf_setSize(int w, int h)
{
    resize(w, h);
}
void qf_QT_pushButton::qf_setText(const QString &text)
{
    setText(text);
}
void qf_QT_pushButton::qf_setBackgroundColor(const QString &color)
{
    QString backgroundColor("background : ");
    backgroundColor = styleSheet() + ";" + backgroundColor + color;
    /** "backgournd : red" */
    setStyleSheet(backgroundColor);
}
void qf_QT_pushButton::qf_setTextColor(const QString &color)
{
    QString textColor("color : ");
    textColor = styleSheet() + ";" + textColor + color;
    qDebug() << textColor;
    /** "color : red" */
    setStyleSheet(textColor);
}


