#include <bits/stdc++.h>

using namespace std;

class Area {
private:
    double length;
    double width;

public:
    Area() : length(0), width(0) {}
    Area(double side) : length(side), width(side) {}

    Area(double l, double w) : length(l), width(w) {}

    double calculateArea() {
        return length * width;
    }

    ~Area() {
        cout << "Object destroyed." << endl;
    }
};

int main() {
    Area ob1;
    Area ob2(10);
    Area ob3(20, 10);

    cout << "Area of Triangle: " << ob1.calculateArea() << endl;
    cout << "Area of Square: " << ob2.calculateArea() << endl;
    cout << "Area of Rectangle: " << ob3.calculateArea() << endl;

    return 0;
}
