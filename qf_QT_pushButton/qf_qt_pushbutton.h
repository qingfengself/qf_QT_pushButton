#ifndef QF_QT_PUSHBUTTON_H
#define QF_QT_PUSHBUTTON_H

#include <QPushButton>

class qf_QT_pushButton : public QPushButton
{
public:
    explicit qf_QT_pushButton(QWidget *parent = 0);

    void qf_setPosition(int x, int y);
    void qf_setSize(int w, int h);
    void qf_setText(const QString &text);
    void qf_setBackgroundColor(const QString &color);
    void qf_setTextColor(const QString &color);

};

#endif // QF_QT_PUSHBUTTON_H
