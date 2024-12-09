//
// Created by Dominik on 2024. 12. 05..
//

#ifndef UDEMYCPPGAME13_H
#define UDEMYCPPGAME13_H



class Vehicle
{
public:
    Vehicle(const std::string& vehicleName, int vehicleCapacity);

    virtual void Run();

private:
    // std::string _name; // and _ in front of a member indicates private. Ha több "name" is lenne itt, akkor kellene használni, de az initializerben átneveztem őket így nem kell.
    std::string name;
    int capacity;
};


class Car : public Vehicle // Car is inheriting from the vehicle
{
public:
    Car(const std::string& carName, int carCapacity, float carMileage);

    float GetMileage() const;

private:
    float mileage;
};

#endif //UDEMYCPPGAME13_H
