#ifndef MANAGER_H
#define MANAGER_H

#include <QObject>
#include <QtDBus>

class Backend{
public:
    virtual void shutdown() = 0;
    virtual void restart()  = 0;
    virtual bool canRestart()  = 0;
    virtual bool canShutdown()  = 0;
};

class Manager
{
public:
    Manager();
    ~Manager();

    void shutdown();
    void restart();
    bool canRestart();
    bool canShutdown();

private:
    Backend *powerProxy;

};

#endif // MANAGER_H
