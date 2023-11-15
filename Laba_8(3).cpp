#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    const int size = 5;
    int arr[size] = { 1, 2, 3, 4, 5 };

    int product = 1;
    for (int i = 0; i < size; i++) {
        product *= arr[i];
    }

    cout << "Произведение всех элементов массива: " << product << endl;

    return 0;
}