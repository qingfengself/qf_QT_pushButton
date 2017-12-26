#include "qf_qt_pushbutton.h"
#include <QPushButton>
#include <QDebug>
#include <QMouseEvent>

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
/*****************************************************
 * reimplemented funcs (protected)
 * **************************************************/
void qf_QT_pushButton::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::MidButton) {
        midBtnPressed = true;
        m_press = event->globalPos();
        qDebug() << __func__ << "middle button pressed";
    } else {
        /*call parents's this func to send signal : clicked()*/
        QPushButton::mousePressEvent(event);
    }


}
void qf_QT_pushButton::mouseMoveEvent(QMouseEvent *event)
{
    if (midBtnPressed) {
        m_move = event->globalPos();
        this->move(this->pos() + m_move - m_press);
        m_press = m_move;
        qDebug() << "middle button move";
    }
}
void qf_QT_pushButton::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::MidButton) {
        midBtnPressed = false;
        qDebug() << "middle button release";
    } else {
        /*call parents's this func to send signal : clicked()*/
        QPushButton::mouseReleaseEvent(event);
    }
}

