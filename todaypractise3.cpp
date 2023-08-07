#include <iostream>
using namespace std;

class Transport;

void cmp_transport(const Transport& microbus, const Transport& car);

class Transport {
private:
    int speed;
    int number_of_passenger;

public:
    Transport(int spd, int passengers) : speed(spd), number_of_passenger(passengers) {}

    friend void cmp_transport(const Transport& microbus, const Transport& car);
};

void cmp_transport(const Transport& microbus, const Transport& car) {
    if (microbus.speed > car.speed) {
        cout << "Microbus is faster than the car." << endl;
    } else if (microbus.speed < car.speed) {
        cout << "Car is faster than the microbus." << endl;
    } else {
        cout << "Microbus and car have the same speed." << endl;
    }

    if (microbus.number_of_passenger > car.number_of_passenger) {
        cout << "Microbus can carry more passengers than the car." << endl;
    } else if (microbus.number_of_passenger < car.number_of_passenger) {
        cout << "Car can carry more passengers than the microbus." << endl;
    } else {
        cout << "Microbus and car can carry the same number of passengers." << endl;
    }
}

int main() {
    Transport microbus(80, 12);
    Transport car(100, 5);
    cmp_transport(microbus, car);
    return 0;
}
