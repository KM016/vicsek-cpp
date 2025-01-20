#include <iostream>
#include "system.h"

int main(){

	int N = 100;
	double L = 10.0;
	double dt = 0.1;
	double noise = 0.1;

        System mySystem(N,L,dt,noise);
        mySystem.updateRule();
        return 0;

}
