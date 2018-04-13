#ifndef SYSTEM_ACTION_H
#define SYSTEM_ACTION_H

//Auxiliary or mallware

class SystemAction { //Auxiliary
    public:
        void changeWallpaper();
        void mouseControl();
        void keyboardControl();
        void screenControl(bool onoff, int brightness);
        void volumeControl(bool onoff, int volume);
        void powerControl(int choice);
        void executeCommand(const String command);
        void windowControl();
        //mbr



};

#endif
