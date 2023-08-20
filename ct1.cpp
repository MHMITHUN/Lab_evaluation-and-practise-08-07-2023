#include <iostream>
using namespace std;
class datalabel
{
public:
    datalabel(double len, double wid) : length(len), width(wid) {}

private:
    double length;
    double width;

    friend class given_input;
};

class given_input
{
public:
    given_input(double len, double wid) : data(len, wid) {}

    double area() const
    {
        return data.length * data.width;
    }

private:
    datalabel data;
};

int main()
{

    given_input gi_rect(5.0, 3.0);
    given_input gi_square(4.0, 4.0);

    cout << "Rectangle Area: " << gi_rect.area() << endl;
    cout << "Square Area: " << gi_square.area() << endl;

    return 0;
}
