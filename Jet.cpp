#include "Jet.h"
#include <cstdlib>

Jet::Jet() {

    numberOfEngines = 1;

    setBrand("Custom");

    setModel("VTx");

}


Jet::Jet(string brand, string model, string fuelType, int numEng) {

    setBrand(brand);

    setModel(model);

    setFuelType(fuelType);

    setNumEng(numEng);

}



Jet::~Jet() = default;



int Jet::getNumEng() {

    return numberOfEngines;

}



void Jet::setNumEng(int numeng) {

	numberOfEngines = numeng;

}



double Jet::mileageEstimate(double time) {

    double mileage = (rand() %  100 + 40) * time;

    if (fuelType == "Rocket" && numberOfEngines > 2) {

        mileage += mileage * 0.05;

    }

    return mileage;

}


string Jet::toString() {

    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Number: " +

           getNumEng();

}
