﻿#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int number;
    cout << "Введите число: ";
    cin >> number;

    if (number > 0) {
        cout << "Положительное число" << endl;
    }
    else if (number < 0) {
        cout << "Отрицательное число" << endl;
    }
    else {
        cout << "Число равно нулю" << endl;
    }

    return 0;
}