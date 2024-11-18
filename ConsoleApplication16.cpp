#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251); // Встановлюємо кодування для кирилиці
    srand(time(0));
    vector<int> arr;

    // Генеруємо випадковий масив
    for (int i = 0; i < 10; i++) {
        int randomNum = rand() % 21 - 10; // Числа від -10 до 10
        arr.push_back(randomNum);
    }

    cout << "Початковий масив: \n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    // Обчислення середнього арифметичного від’ємних чисел
    int sum = 0;
    int count = 0;

    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] < 0) {
            sum += arr[i];
            count++;
        }
    }

    cout << "\nСереднє арифметичне всіх від’ємних елементів:\n";
    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        cout << average << endl;
    }
    else {
        cout << "У масиві немає від’ємних елементів.\n";
    }

    return 0;
}