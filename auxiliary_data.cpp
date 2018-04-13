#include "auxiliary.h"
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <wininet.h>
#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>
#pragma comment(lib, "wininet")
using namespace std;

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

void AuxiliaryData::exec() {
    std::array<char, 128> buffer;
    std::string result;

    std::shared_ptr<FILE> pipe(popen("windows.exe", "r"), pclose);

    if (!pipe)
        throw std::runtime_error("popen() failed!");

    while (!feof(pipe.get())) {
        if (fgets(buffer.data(), 128, pipe.get()) != nullptr)
            result += buffer.data();
    }

    cout << "fff" <<result;
}

void AuxiliaryData::getSystemData() {

}
