#include <iostream>
#include "system.h"

int main(){

	int N = 100;
	double L = 20.0;
	double dt = 0.5;
	double noise = 0.1;

        System mySystem(N,L,dt,noise);

	 std::cout << "Particle number: " << mySystem.particleNumber << std::endl;
         std::cout << "Noise strength: " << mySystem.noiseStrength << std::endl;
         std::cout << "Side length: " << mySystem.sideLength << std::endl;
         std::cout << "Time step: " << mySystem.timeStep << std::endl;

        mySystem.updateRule();
        return 0;

}
