#include "Airplane.h"
#include <cstdlib.h>

Airplane::Airplane() {

    numberOfEngines = 1;

    setBrand("Custom");

    setModel("VTx");

}


Airplane::Airplane(string brand, string model, string fuelType, int numEng) {

    setBrand(brand);

    setModel(model);

    setFuelType(fuelType);

    setNumEng(numEng);

}



Airplane::~Airplane() = default;



int Jet::getNumEng() {

    return numberEngines;

}



void Airplane::setNumEng(int numeng) {

        numberEngines = numeng;

}



double Airplane::mileageEstimate(double time) {

    double mileage = (rand() %  100 + 40) * time;

    return mileage;

}


string Airplane::toString() {

    return "-> Airplane\n" + PoweredVehicle::toString() + "\n\tEngine Number: " +

           getNumEng();

}

