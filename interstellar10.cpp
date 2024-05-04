#include <iostream>
#include <string>

class Spacecraft {
private:
    std::string name;
    double fuelCapacity;
    double fuelConsumptionRate;
    double currentFuel;
    double distanceTraveled;

public:
    Spacecraft(const std::string& name, double fuelCapacity, double fuelConsumptionRate)
        : name(name), fuelCapacity(fuelCapacity), fuelConsumptionRate(fuelConsumptionRate),
          currentFuel(fuelCapacity), distanceTraveled(0.0) {}

    bool canTravel(double distance) {
        double requiredFuel = distance * fuelConsumptionRate;
        return currentFuel >= requiredFuel;
    }

    void travel(double distance) {
        if (canTravel(distance)) {
            currentFuel -= distance * fuelConsumptionRate;
            distanceTraveled += distance;
            std::cout << name << " traveled " << distance << " light-years." << std::endl;
        } else {
            std::cout << name << " does not have enough fuel to travel " << distance << " light-years." << std::endl;
        }
    }

    void refuel(double amount) {
        if (amount <= 0) {
            std::cout << "Invalid refuel amount." << std::endl;
            return;
        }

        double remainingSpace = fuelCapacity - currentFuel;
        if (amount > remainingSpace) {
            amount = remainingSpace;
        }

        currentFuel += amount;
        std::cout << name << " refueled with " << amount << " units of fuel." << std::endl;
    }

    void displayStats() const {
        std::cout << "Spacecraft: " << name << std::endl;
        std::cout << "Fuel Capacity: " << fuelCapacity << " units" << std::endl;
        std::cout << "Current Fuel: " << currentFuel << " units" << std::endl;
        std::cout << "Distance Traveled: " << distanceTraveled << " light-years" << std::endl;
    }
};

int main() {
    Spacecraft starship("Enterprise", 1500.0, 0.15);

    starship.displayStats();

    starship.travel(75.0);
    starship.refuel(300.0);
    starship.travel(150.0);

    starship.displayStats();

    return 0;
}