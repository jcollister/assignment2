//Joshua Collister

#ifndef DRIVINGSIMULATOR_JET_H

#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:

    int numberOfEngines;

public:

    Jet();

    explicit Jet(string brand, string model, string fuelType,

                 int numberOfEngines);

    virtual ~Jet();

    int getNumEng();

    void setNumEng(int numberOfEngines);

    virtual double mileageEstimate(double time);

    virtual string toString();

};

#endif //DRIVINGSIMULATOR_JET_H
