/*�������� ������� �� ����� �� ������ ������ ���� ��.

��������� ������ �� ��������� ������ (���� a[50][30] � v[10][10]) �� ��-����� ������ �� ��-����� �������������.

�������������� �������� ������ � {} (�� �� �� � 0) ��� �������� ���������� (� char ������). */

#include <iostream>
#include <string>
#include <windows.h> // �� SetConsoleOutputCP
using namespace std;

/// --- ������� �� ����������� �� ���� ����� (int) � 6 ������ ---
void printArrayInt(int arr[][6], int rows, int cols, const string& name) {
    cout << "����� " << name << ":" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/// --- ������� �� ����������� �� ���� ����� (int) � 3 ������ ---
void printArrayInt3(int arr[][3], int rows, int cols, const string& name) {
    cout << "����� " << name << ":" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/// --- ������� �� ����������� �� ���� ����� (int) � 2 ������ ---
void printArrayInt2(int arr[][2], int rows, int cols, const string& name) {
    cout << "����� " << name << ":" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/// --- ������� �� ����������� �� ������ ����� (float) ---
void printArrayFloat(float arr[][30], int rows, int cols, const string& name) {
    cout << "����� " << name << " (float):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/// --- ������� �� ����������� �� ������ ����� (double) ---
void printArrayDouble(double arr[][10], int rows, int cols, const string& name) {
    cout << "����� " << name << " (double):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/// --- ������� �� ����������� �� ������� (char) ---
void printArrayChar(char arr[][5], int rows, int cols, const string& name) {
    cout << "����� " << name << " (char):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {

    SetConsoleOutputCP(1251); // ��������� �� ��������� �� Windows-1251 (��������)

    /// ����������� �� ����� �� float � 50 ���� � 30 ������
    float a[50][30] = {{0}}; // ������������� � 0
    printArrayFloat(a, 3, 5, "a (������� 3 ���� �� 5 ������)");

    /// ����� �� ���� ����� � 20 ���� � 6 ������
    int b[20][6] = {{0}};
    printArrayInt(b, 3, 6, "b (������� 3 ����)");

    /// ����� �� ������� � 3 ���� � 5 ������
    char t[3][5] = {{'A', 'B', 'C', 'D', 'E'}, {'F', 'G', 'H', 'I', 'J'}, {'K', 'L', 'M', 'N', 'O'}};
    printArrayChar(t, 3, 5, "t");

    /// ��������� �� ��������� �� ��������� double �����
    const int M = 10;
    double v[M][M] = {{0}};
    printArrayDouble(v, 3, 3, "v (3x3 ����)");

    /// ����� � ����� �������� ���������
    int z[3][2] = { {1, 3}, {5, 7}, {2, 9} };
    printArrayInt2(z, 3, 2, "z");

    /// �������� �������������
    int fi[5][6] = {{1, 2}, {5}, {3, 4, 5}, {2, 3, 4, 5}, {2, 0, 4}};
    printArrayInt(fi, 5, 6, "fi");

    /// ����� ������������� (������������ �� fi)
    int fi2[5][6] = {{1, 2, 0, 0, 0, 0},
                     {5, 0, 0, 0, 0, 0},
                     {3, 4, 5, 0, 0, 0},
                     {2, 3, 4, 5, 0, 0},
                     {2, 0, 4, 0, 0, 0}};
    printArrayInt(fi2, 5, 6, "fi2");

    /// ������������� �� int ������ � 3 ������
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
