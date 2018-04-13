#ifndef AUXILIARY_H
#define AUXILIARY_H
using namespace std;
#include <ctime>
#include <string>

class AuxiliaryData {
    private:
        time_t currentTime = time(0);
        struct tm* localTime = localtime(&currentTime);

    public:

        //TIME AND DATE

        std::string getCurrentTime();
        std::string getCurrentDate();

        //Get Windows system info //software info

        void getSystemData();
        void exec();

        //Get computer hardware info

        //Get ip info

        //
        //std::string timeStr = ctime(&currentTime);

};

#endif
