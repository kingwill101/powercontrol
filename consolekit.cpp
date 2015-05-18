#include "consolekit.h"

ConsoleKit::ConsoleKit()
{
        consoleKit = new QDBusInterface("org.freedesktop.ConsoleKit",
                              "/org/freedesktop/ConsoleKit/Manager",
                              "org.freedesktop.ConsoleKit.MAnager",
                              QDBusConnection::sessionBus());
}

ConsoleKit::~ConsoleKit()
{
}

void ConsoleKit::shutdown(){
    consoleKitCall("stop");

}
bool ConsoleKit::canShutdown() {
    if(this->consoleKit->isValid()){
       QDBusReply<bool> response = consoleKit->call("canStop");
       return response;
    }
}

bool ConsoleKit::canRestart(){
    if(consoleKit->isValid()){
       QDBusReply<bool> response = consoleKit->call("canRestart");
       return response;
    }
}

void ConsoleKit::restart(){
    consoleKitCall("restart");
}

void ConsoleKit::consoleKitCall(QString method){

    if(consoleKit->isValid()){
        QDBusMessage response = consoleKit->call(method);
        if (response.type() == QDBusMessage::ErrorMessage){
            qDebug()<<"Error: couldnt call method "<< method;
        }
    }
}
