/*Äîáàâåíè ôóíêöèè çà ïå÷àò íà ìàñèâè ñïîðåä òèïà èì.

Îãðàíè÷åí ïå÷àòà íà îãðîìíèòå ìàñèâè (êàòî a[50][30] è v[10][10]) äî ïî-ìàëúê ðàçìåð çà ïî-ëåñíî âèçóàëèçèðàíå.

Èíèöèàëèçèðàíè ïðàçíèòå ìàñèâè ñ {} (çà äà ñà ñ 0) èëè ïðèìåðíî ñúäúðæàíèå (â char ìàñèâà). */

#include <iostream>
#include <string>
#include <windows.h> // çà SetConsoleOutputCP
using namespace std;

/// --- Ôóíêöèÿ çà îòïå÷àòâàíå íà öåëè ÷èñëà (int) ñ 6 êîëîíè ---
void printArrayInt(int arr[][6], int rows, int cols, const string& name) {
    cout << "Ìàñèâ " << name << ":" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/// --- Ôóíêöèÿ çà îòïå÷àòâàíå íà öåëè ÷èñëà (int) ñ 3 êîëîíè ---
void printArrayInt3(int arr[][3], int rows, int cols, const string& name) {
    cout << "Ìàñèâ " << name << ":" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/// --- Ôóíêöèÿ çà îòïå÷àòâàíå íà öåëè ÷èñëà (int) ñ 2 êîëîíè ---
void printArrayInt2(int arr[][2], int rows, int cols, const string& name) {
    cout << "Ìàñèâ " << name << ":" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/// --- Ôóíêöèÿ çà îòïå÷àòâàíå íà ðåàëíè ÷èñëà (float) ---
void printArrayFloat(float arr[][30], int rows, int cols, const string& name) {
    cout << "Ìàñèâ " << name << " (float):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/// --- Ôóíêöèÿ çà îòïå÷àòâàíå íà ðåàëíè ÷èñëà (double) ---
void printArrayDouble(double arr[][10], int rows, int cols, const string& name) {
    cout << "Ìàñèâ " << name << " (double):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/// --- Ôóíêöèÿ çà îòïå÷àòâàíå íà ñèìâîëè (char) ---
void printArrayChar(char arr[][5], int rows, int cols, const string& name) {
    cout << "Ìàñèâ " << name << " (char):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {

    SetConsoleOutputCP(1251); // Íàñòðîéêà íà êîíçîëàòà çà Windows-1251 (êèðèëèöà)

    /// Äåêëàðèðàíå íà ìàñèâ îò float ñ 50 ðåäà è 30 êîëîíè
    float a[50][30] = {{0}}; // èíèöèàëèçèðàí ñ 0
    printArrayFloat(a, 3, 5, "a (ïúðâèòå 3 ðåäà ïî 5 êîëîíè)");

    /// Ìàñèâ îò öåëè ÷èñëà ñ 20 ðåäà è 6 êîëîíè
    int b[20][6] = {{0}};
    printArrayInt(b, 3, 6, "b (ïúðâèòå 3 ðåäà)");

    /// Ìàñèâ îò ñèìâîëè ñ 3 ðåäà è 5 êîëîíè
    char t[3][5] = {{'A', 'B', 'C', 'D', 'E'}, {'F', 'G', 'H', 'I', 'J'}, {'K', 'L', 'M', 'N', 'O'}};
    printArrayChar(t, 3, 5, "t");

    /// Êîíñòàíòà çà ðàçìåðèòå íà êâàäðàòåí double ìàñèâ
    const int M = 10;
    double v[M][M] = {{0}};
    printArrayDouble(v, 3, 3, "v (3x3 ÷àñò)");

    /// Ìàñèâ ñ ðú÷íî çàäàäåíè ñòîéíîñòè
    int z[3][2] = { {1, 3}, {5, 7}, {2, 9} };
    printArrayInt2(z, 3, 2, "z");

    /// ×àñòè÷íà èíèöèàëèçàöèÿ
    int fi[5][6] = {{1, 2}, {5}, {3, 4, 5}, {2, 3, 4, 5}, {2, 0, 4}};
    printArrayInt(fi, 5, 6, "fi");

    /// Ïúëíà èíèöèàëèçàöèÿ (åêâèâàëåíòíà íà fi)
    int fi2[5][6] = {{1, 2, 0, 0, 0, 0},
                     {5, 0, 0, 0, 0, 0},
                     {3, 4, 5, 0, 0, 0},
                     {2, 3, 4, 5, 0, 0},
                     {2, 0, 4, 0, 0, 0}};
    printArrayInt(fi2, 5, 6, "fi2");

    /// Èíèöèàëèçàöèÿ íà int ìàñèâè ñ 3 êîëîíè
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
