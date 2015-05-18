#include "powercontrol_plugin.h"
#include "powercontrol.h"

#include <qqml.h>

void PowerControlPlugin::registerTypes(const char *uri)
{
    // @uri papyros.Desktop.powerControl
    qmlRegisterType<powerControl>(uri, 1, 0, "powerControl");
}


