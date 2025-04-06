/*Добавени функции за печат на масиви според типа им.

Ограничен печата на огромните масиви (като a[50][30] и v[10][10]) до по-малък размер за по-лесно визуализиране.

Инициализирани празните масиви с {} (за да са с 0) или примерно съдържание (в char масива). */

#include <iostream>
#include <string>
#include <windows.h> // за SetConsoleOutputCP
using namespace std;

/// --- Функция за отпечатване на цели числа (int) с 6 колони ---
void printArrayInt(int arr[][6], int rows, int cols, const string& name) {
    cout << "Масив " << name << ":" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/// --- Функция за отпечатване на цели числа (int) с 3 колони ---
void printArrayInt3(int arr[][3], int rows, int cols, const string& name) {
    cout << "Масив " << name << ":" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/// --- Функция за отпечатване на цели числа (int) с 2 колони ---
void printArrayInt2(int arr[][2], int rows, int cols, const string& name) {
    cout << "Масив " << name << ":" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/// --- Функция за отпечатване на реални числа (float) ---
void printArrayFloat(float arr[][30], int rows, int cols, const string& name) {
    cout << "Масив " << name << " (float):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/// --- Функция за отпечатване на реални числа (double) ---
void printArrayDouble(double arr[][10], int rows, int cols, const string& name) {
    cout << "Масив " << name << " (double):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/// --- Функция за отпечатване на символи (char) ---
void printArrayChar(char arr[][5], int rows, int cols, const string& name) {
    cout << "Масив " << name << " (char):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {

    SetConsoleOutputCP(1251); // Настройка на конзолата за Windows-1251 (кирилица)

    /// Деклариране на масив от float с 50 реда и 30 колони
    float a[50][30] = {{0}}; // инициализиран с 0
    printArrayFloat(a, 3, 5, "a (първите 3 реда по 5 колони)");

    /// Масив от цели числа с 20 реда и 6 колони
    int b[20][6] = {{0}};
    printArrayInt(b, 3, 6, "b (първите 3 реда)");

    /// Масив от символи с 3 реда и 5 колони
    char t[3][5] = {{'A', 'B', 'C', 'D', 'E'}, {'F', 'G', 'H', 'I', 'J'}, {'K', 'L', 'M', 'N', 'O'}};
    printArrayChar(t, 3, 5, "t");

    /// Константа за размерите на квадратен double масив
    const int M = 10;
    double v[M][M] = {{0}};
    printArrayDouble(v, 3, 3, "v (3x3 част)");

    /// Масив с ръчно зададени стойности
    int z[3][2] = { {1, 3}, {5, 7}, {2, 9} };
    printArrayInt2(z, 3, 2, "z");

    /// Частична инициализация
    int fi[5][6] = {{1, 2}, {5}, {3, 4, 5}, {2, 3, 4, 5}, {2, 0, 4}};
    printArrayInt(fi, 5, 6, "fi");

    /// Пълна инициализация (еквивалентна на fi)
    int fi2[5][6] = {{1, 2, 0, 0, 0, 0},
                     {5, 0, 0, 0, 0, 0},
                     {3, 4, 5, 0, 0, 0},
                     {2, 3, 4, 5, 0, 0},
                     {2, 0, 4, 0, 0, 0}};
    printArrayInt(fi2, 5, 6, "fi2");

    /// Инициализация на int масиви с 3 колони
    int ma1[4][3] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    printArrayInt3(ma1, 4, 3, "ma1");

    int ma2[4][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {9, 10, 11}};
    printArrayInt3(ma2, 4, 3, "ma2");

    int ma4[4][3] = {{0}, {1}, {2}, {3}};
    printArrayInt3(ma4, 4, 3, "ma4");

    int ma3[4][3] = {{0, 0, 0}, {1, 0, 0}, {2, 0, 0}, {3, 0, 0}};
    printArrayInt3(ma3, 4, 3, "ma3");

    int ma5[4][3] = {0, 1, 2, 3};
    printArrayInt3(ma5, 4, 3, "ma5");

    int ma6[4][3] = {{0, 1, 2}, {3, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    printArrayInt3(ma6, 4, 3, "ma6");

    return 0;
}
