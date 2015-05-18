#ifndef HAL_H
#define HAL_H
#include "manager.h"


class Hal : public Backend
{
public:
    Hal();
    ~Hal();
    void shutdown() override;
    void restart() override;
    bool canRestart()   override;
    bool canShutdown()  override;
    void hibernate();
    void suspend();

private:
    void halCall(QString);
    QDBusInterface *hal;
};

#endif // HAL_H
