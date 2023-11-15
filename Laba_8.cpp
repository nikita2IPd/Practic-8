#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int number;
    int count = 0;

    cout << "Введите число: ";
    cin >> number;

    for (int temp = number; temp != 0; temp /= 10) {
        count++;
    }

    cout << "Количество цифр: " << count << endl;

    return 0;
}
