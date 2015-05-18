#ifndef POWERCONTROL_PLUGIN_H
#define POWERCONTROL_PLUGIN_H

#include <QQmlExtensionPlugin>

class PowerControlPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")

public:
    void registerTypes(const char *uri);
};

#endif // POWERCONTROL_PLUGIN_H

