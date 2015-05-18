#ifndef POWERCONTROL_H
#define POWERCONTROL_H

#include <QQuickItem>

class powerControl : public QQuickItem
{
    Q_OBJECT
    Q_DISABLE_COPY(powerControl)

public:
    powerControl(QQuickItem *parent = 0);
    ~powerControl();
};

#endif // POWERCONTROL_H

