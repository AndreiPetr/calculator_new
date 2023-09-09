#include <iostream>

using namespace std;

class Calculator {
private:
    double num1;
    double num2;
public:
    double add() {
        return num1 + num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double subtract_1_2() {
        return num1 - num2;
    }

    double subtract_2_1() {
        return num2 - num1;
    }

    double divide_1_2() {
        return num1 / num2;
    }

    double divide_2_1() {
        return num2 / num1;
    }

    bool set_num1(double num1) {
        if (num1 != 0) {
            this->num1 = num1;
            return true;
        }
        return false;
    }

    bool set_num2(double num2) {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        }
        return false;
    }
};

int main() {
    setlocale(LC_ALL, "RUS");

    Calculator calculator;
    double num1, num2;

    while (true) {

        cout << "Введите num1: ";
        cin >> num1;

        if (!calculator.set_num1(num1)) {
            cout << "Неверный ввод!" << endl;
            continue;
        }

        cout << "Введите num2: ";
        cin >> num2;

        if (!calculator.set_num2(num2)) {
            cout << "Неверный ввод!" << endl;
            continue;
        }

        cout << "num1 + num2 = " << calculator.add() << endl;
        cout << "num1 - num2 = " << calculator.subtract_1_2() << endl;
        cout << "num2 - num1 = " << calculator.subtract_2_1() << endl;
        cout << "num1 * num2 = " << calculator.multiply() << endl;
        cout << "num1 / num2 = " << calculator.divide_1_2() << endl;
        cout << "num2 / num1 = " << calculator.divide_2_1() << endl;
    }

    return 0;
}