#ifndef AUXILIARY_H
#define AUXILIARY_H //AUXILIARY_UTILITIES

#include <windows.h>
#include <ctime>
#include <cstdio>
#include <memory>
#include <array>
#include <string>

class AuxiliaryData {
    private:
        time_t currentTime = time(0);
        struct tm* localTime = localtime(&currentTime);

    protected:
        std::string pipeCommandExecution(const char* command); //Exec
        void fileCommandExecution(std::string command, std::string fileName);
        void commandExecution(std::string command);

        std::string getCurrentTime();
        std::string getCurrentDate();

        //encryption
};

#endif
