#include "system.h"
#include <iostream>

System::System(int particleNumber, double sideLength, double timeStep, double noiseStrength)
{
	this->particleNumber = particleNumber; // Assign parameter to class member variable
	this->noiseStrength = noiseStrength;  // Assign parameter to class member variable
	
	std::cout<< "I am constructing the system" <<std::endl ;
}

void System::updateRule(){
	

	std::cout<<"I am updating the system..."<<std::endl;

}
