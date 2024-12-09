#include <iostream>
#include <vector>
#include <memory>
#include "UdemyCppGame13.h"
#include "templates.h"

// inheritance
// virtual means the child can override it
// override means we are not creating a new function. We are redefining the ...vehicle class part of the ...run for the ...car

Vehicle::Vehicle(const std::string& vehicleName, int vehicleCapacity)
    : name{vehicleName}, capacity{vehicleCapacity}
{

}

void Vehicle::Run()
{
    std::cout << name << " with " << capacity << " people running" << std::endl;
}


Car::Car(const std::string& carName, int carCapacity, float carMileage)
    : Vehicle(carName, carCapacity), mileage{carMileage}
{

}

float Car::GetMileage() const
{
    return mileage;
}


int main()
{
    Vehicle vehicle{"LightYears2000", 1000};

    Car car{"Toyota", 5, 51111};
    car.Run();
    std::cout << car.GetMileage() << std::endl;


    // templates.h
    DynamicNumber<float> dFloat{21.33};
    std::cout << dFloat.GetValue() << std::endl;

    return 0;
}
