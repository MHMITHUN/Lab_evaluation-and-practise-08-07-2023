#include<bits/stdc++.h>
using namespace std;
#define str string

class Flower {
private:
    str color;
    str name;
    friend void st_fl_value(Flower& flower, const str& color, const str& name);

    friend void ds_fl_data(const Flower& flower);

public:
    Flower() : color(""), name("") {}

};

void st_fl_value(Flower& flower, const str& color, const str& name) {
    flower.color = color;
    flower.name = name;
}

void ds_fl_data(const Flower& flower) {
    cout << "Flower Name: " << flower.name << endl;
    cout << "Flower Color: " << flower.color << endl;
}

int main() {
    Flower myFlower;
    st_fl_value(myFlower, "White","Lily");
    ds_fl_data(myFlower);

    return 0;
}
