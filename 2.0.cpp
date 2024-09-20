#include <iostream>
#include <cmath> // Для математичних функцій, наприклад, sin і cos

using namespace std;

int main() {
    // Оголошення змінних
    double alpha, beta;
    //double z1;
    double z2; // Закоментовано

    // Введення значень alpha та beta
    cout << "alpha =: ";
    cin >> alpha;
    cout << " beta =: ";
    cin >> beta;

    // Обчислення z1
    //z1 = (sin(alpha) + cos(2 * beta - alpha)) / (cos(alpha) - sin(2 * beta - alpha));

    // Обчислення z2
     z2 = (1 + sin(2 * beta)) / cos(2 * beta); // Закоментовано

    // Виведення результатів
    //cout << " z1=: " << z1 << endl;
     cout << " z2=: " << z2 << endl; // Закоментовано

    return 0;
}