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

protected:
    /* use middle mouse button to move button */
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

    /* for use ctrl+wheel to resize button */
    void wheelEvent(QWheelEvent * event);
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);

private:
    /* for middle mouse button to move button */
    bool midBtnPressed;
    QPoint m_press;
    QPoint m_move;

    /* for use ctrl+wheel to resize button */
    bool ctlKeyPressed;

    /* for use ctrl+left mouse button to resize button */
    bool leftBtnPressed;
};

#endif // QF_QT_PUSHBUTTON_H
