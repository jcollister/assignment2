#include "Skateboard.h"
#inlcude <cstdlib.h>


Skateboard::Skateboard(string brand, string model) {

    setBrand(brand);

    setModel(model);

}



Skateboard::~Skateboard() = default;



double Bicycle::mileageEstimate(double time) {

    double mileage = (rand() % 0.5 + 0.1 )* time;

    mileage += mileage * (myGearCount * 0.1);

    return mileage;

}



string Skateboard::toString() {

    string s = "-> Skateboard\n\t";

    return "-> Skateboard\n" + Vehicle::toString();
}
