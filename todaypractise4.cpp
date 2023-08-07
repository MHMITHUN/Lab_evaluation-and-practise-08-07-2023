#include<bits/stdc++.h>
using namespace std;
#define magic virtual double
class Shape;

void ini_shape_name(Shape& shape, const string& name);

class Shape {
private:
    string shape_name;

public:
    Shape() : shape_name("undefined") {}

    friend void ini_shape_name(Shape& shape, const string& name);

    magic calculateArea() const = 0;

    magic calculatePerimeter() const = 0;

    string getShapeName() const {
        return shape_name;
    }
};

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double calculateArea() const override {
        return 0.5 * base * height;
    }

    double calculatePerimeter() const override {
        return 3 * base;
    }
};

class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double calculateArea() const override {
        return side * side;
    }

    double calculatePerimeter() const override {
        return 4 * side;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() const override {
        return length * width;
    }

    double calculatePerimeter() const override {
        return 2 * (length + width);
    }
};

void ini_shape_name(Shape& shape, const string& name) {
    shape.shape_name = name;
}

int main() {
    Shape* shape = 0;

    string shape_choice = "triangle";
    if (shape_choice == "triangle") {
        shape = new Triangle(5, 8);
        ini_shape_name(*shape, "Triangle");
    } else if (shape_choice == "square") {
        shape = new Square(6);
        ini_shape_name(*shape, "Square");
    } else if (shape_choice == "rectangle") {
        shape = new Rectangle(4, 7);
        ini_shape_name(*shape, "Rectangle");
    } else {
        cout << "Invalid shape choice!" << endl;
        return 1;
    }

    cout << "Shape: " << shape->getShapeName() << endl;
    cout << "Area: " << shape->calculateArea() << endl;
    cout << "Perimeter: " << shape->calculatePerimeter() << endl;

    delete shape;
    return 0;
}
