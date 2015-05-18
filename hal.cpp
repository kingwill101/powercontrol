#include "hal.h"
/*
 * HAL Specification
https://secure.freedesktop.org/~dkukawka/hal-spec-git/hal-spec.html#interface-device-systempower
*/

Hal::Hal()
{
        hal = new QDBusInterface("org.freedesktop.Hal",
                                 "/org/freedesktop/Hal/devices/computer",
                                 "org.freedesktop.Hal.Device.SystemPowerManagement",
                                 QDBusConnection::systemBus());
}

Hal::~Hal()
{
}

void Hal::shutdown(){
    halCall("Shutdown");

}
bool Hal::canShutdown() {
}

bool Hal::canRestart(){ 
}

void Hal::suspend(){
    halCall("Suspend");
}

void Hal::hibernate(){
    halCall("Hibernate");
}

void Hal::restart(){
    halCall("Reboot");
}

void Hal::halCall(QString method){

    if(hal->isValid()){
        QDBusMessage response = hal->call(method);
        if (response.type() == QDBusMessage::ErrorMessage){
            qDebug()<<"Error: couldnt call method "<< method;
        }
    }
}
