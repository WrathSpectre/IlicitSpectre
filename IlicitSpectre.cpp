#include "malware.h"
#include "spyware.h"
#include "ransomware.h"

#include <iostream>

using namespace std;

int main()
{
    Spyware *spyware = Spyware::getInstance();
    spyware->timee();
}
