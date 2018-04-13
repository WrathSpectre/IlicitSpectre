#include "spyware.h"

Spyware* Spyware::instance = nullptr;

Spyware* Spyware::getInstance() {
    if(instance == nullptr)
        instance = new Spyware();

    return instance;
}

Spyware::Spyware() {

}

void Spyware::asciiInput() {

}

void Spyware::actionInput() {
  
}
