#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    // Объявление переменных для размеров бруска
    float x, y, z;

    // Ввод размеров бруска
    cout << "Введите размеры бруска:" << endl;
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;
    cout << "Z: ";
    cin >> z;

    // Проверка минимального размера бруска
    if (x < 5 || y < 5 || z < 5) {
        cout << "Размеры бруска должны быть не менее 5 см." << endl;
        return 1; // Завершение программы с ошибкой
    }

    // Расчет количества кубиков размером 5 см
    int cubesX = static_cast<int>(x / 5); // Количество кубиков по оси X
    int cubesY = static_cast<int>(y / 5); // Количество кубиков по оси Y
    int cubesZ = static_cast<int>(z / 5); // Количество кубиков по оси Z

    int totalCubes = cubesX * cubesY * cubesZ; // Общее количество кубиков

    // Вывод количества кубиков
    cout << "Из этого бруска можно изготовить " << totalCubes << " кубиков." << endl;

    // Определение максимального набора кубиков
    int maxSetCubes = 0; // Максимальное количество кубиков в наборе

    for (int i = 2; i <= 10; ++i) { // Проверяем наборы от 2x2x2 до 10x10x10
        int currentSetCubes = pow(i, 3); // Количество кубиков в текущем наборе
        if (currentSetCubes <= totalCubes) {
            maxSetCubes = currentSetCubes; // Обновляем максимальное количество кубиков в наборе
        } else {
            break; // Если текущий набор больше, выходим из цикла
        }
    }

    // Вывод информации о наборе
    if (maxSetCubes > 0) {
        cout << "Из них можно составить набор из " << maxSetCubes << " кубиков." << endl;
    } else {
        cout << "Невозможно составить набор из кубиков." << endl;
    }

    return 0;
}
