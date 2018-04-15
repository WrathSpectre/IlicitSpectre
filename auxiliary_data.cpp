#include "auxiliary.h"

#include <iostream>

std::string AuxiliaryData::getCurrentTime() {
    return std::to_string(localTime->tm_hour) + ":" +
           std::to_string(localTime->tm_min) + ":" +
           std::to_string(localTime->tm_sec);
}

std::string AuxiliaryData::getCurrentDate() {
    return std::to_string(localTime->tm_mday) + "-" +
           std::to_string(1 + localTime->tm_mon) + "-" +
           std::to_string(1900 + localTime->tm_year);
}

std::string AuxiliaryData::pipeCommandExecution(const char *command) {
    std::array<char, 128> buffer;
    std::string result = "";

    std::shared_ptr<FILE> pipe(popen(command, "r"), pclose);

    if (pipe) {
        while (!feof(pipe.get())) {
            if (fgets(buffer.data(), 128, pipe.get()) != nullptr)
                result += buffer.data();
        }
    }

    return result;
}

void AuxiliaryData::fileCommandExecution(std::string command, std::string fileName) {

}

void AuxiliaryData::commandExecution(std::string command) {
    #ifdef _WIN32
        std::cout << "hhh";
        HWND hwnd;
        ShellExecute(0, "ipconfig", NULL, NULL, NULL, SW_SHOW);
    #elif __linux__

    #endif
}
