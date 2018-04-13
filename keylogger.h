#ifndef KEYLOGGER_H
#define KEYLOGGER_H

#ifdef _WIN32
    #include <windows.h>
#elif __linux__

#else
  #error "OS not supperted."
#endif

#include <fstream>

class Keylogger {
    private:
        /*static Keylogger *instance;
        Keylogger();

        String fileName;
        bool execute;

        fstream file;

        void writeToLog(const char);
        bool actionKey(const char);
        void Logger();*/

    public:
        /*static Keylogger *getInstance();
        int startCapturing();

        fstream getRawFile(const String, bool);
        fstream getEditedFile(const String, bool);*/
};

#endif
