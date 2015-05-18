#include "manager.h"
#include "consolekit.h"
#include <QDebug>

Manager::Manager()
{
      powerProxy = new ConsoleKit();
}

Manager::~Manager()
{

}

void Manager::shutdown(){
    powerProxy->shutdown();
}
bool Manager::canShutdown(){
    powerProxy->canShutdown();
}

bool Manager::canRestart(){
    powerProxy->canRestart();
}

void Manager::restart(){
    powerProxy->restart();
}

