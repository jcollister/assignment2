//Joshua Collister

#ifndef DRIVINGSIMULATOR_AIRPLANE_H

#define DRIVINGSIMULATOR_AIRPLANE_H

#include "PoweredVehicle.h"

class Airplane : public PoweredVehicle {

private:

    int numberEngines;

public:

    Airplane();

    explicit Airplane(string brand, string model, string fuelType,

                 int numberEngines);

    virtual ~Airplane

    int getNumEng();

    void setNumEng(int numberEngines);

    virtual double mileageEstimate(double time);

    virtual string toString();

};

#endif //DRIVINGSIMULATOR_AIRPLANE_H




















