#include <bits/stdc++.h>
using namespace std;

class Calculator {
private:
    int num1;
    int num2;

public:

    Calculator(int n1, int n2) : num1(n1), num2(n2) {}

    friend int sum(const Calculator& calc);
    friend int product(const Calculator& calc);
    friend double quotient(const Calculator& calc);
    friend int remainder(const Calculator& calc);
};

int sum(const Calculator& calc) {
    return calc.num1 + calc.num2;
}

int product(const Calculator& calc) {
    return calc.num1 * calc.num2;
}
double quotient(const Calculator& calc) {
    if (calc.num2 == 0) {
        cout<< "Error: Division by zero." << endl;
        return 0.0;
    }
    return <double>(calc.num1) / calc.num2;
}

int remainder(const Calculator& calc) {
    if (calc.num2 == 0) {
        cout<< "Error: Division by zero." << endl;
        return 0;
    }
    return calc.num1 % calc.num2;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Calculator calc(num1, num2);

    cout << "Sum: " << sum(calc) << endl;
    cout << "Product: " << product(calc) << endl;
    cout << "Quotient: " << quotient(calc) << endl;
    cout << "Remainder: " << remainder(calc) << endl;

    return 0;
}
