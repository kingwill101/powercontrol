#ifndef CONSOLEKIT_H
#define CONSOLEKIT_H
#include <QtDBus>
#include "manager.h"

class ConsoleKit : public Backend
{
public:
    ConsoleKit();
    ~ConsoleKit();
    void shutdown() override;
    void restart() override;
    bool canRestart()   override;
    bool canShutdown()  override;

private:
    void consoleKitCall(QString);
    QDBusInterface *consoleKit;
};

#endif // CONSOLEKIT_H
