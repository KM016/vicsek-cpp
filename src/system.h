#ifndef SYSTEM_H
#define SYSTEM_H

#include <vector> // to use standard C++ vectors
// #include "box.h" // yet to be created!
// #include "particle.h" // yet to be created!

class System {
public:
    // Constructor declaration
    System(int particleNumber, double sideLength, double timeStep, double noiseStrength);

    // Member variables
    int particleNumber;
    double noiseStrength;
    double sideLength;
    double timeStep; // Renamed from timeStamp to timeStep
    //Box simulationBox;
    //std::vector<Particle> particles;
   

    void updateRule();
};

#endif

