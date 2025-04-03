#include <iostream>
#include <vector>

using namespace std;

// Глобален масив – автоматично инициализиран с нули
int defaultUninitialized[2];

int main() {
    // Локален масив – инициализиран с нули
    int uninitialized[4] = {};
    cout << "uninitialized: ";
    for (int i : uninitialized) cout << i << " "; // Цикъл по диапазон (range-based for loop)
    cout << endl;

    // Масив с три елемента
    int numbers[3] = {13, 42, 69};
    cout << "numbers: ";
    for (int i : numbers) cout << i << " "; // Цикъл по диапазон
    cout << endl;

    // Масив от символи
    char abc[] = {'a', char('a' + 1), 99};
    cout << "abc: ";
    for (char c : abc) cout << c << " "; // Цикъл по диапазон
    cout << endl;

    char xyz[] = "xyz";
    cout << "xyz: " << xyz << endl; // Извежда "xyz", защото низовете в C++ са null-terminated

    // Празен вектор
    vector<float> emptyArray;
    cout << "emptyArray size: " << emptyArray.size() << endl;

    // Масив с първоначално зададена стойност
    double arrayWithDefaults[3] = {3.14};
    cout << "arrayWithDefaults: ";
    for (double d : arrayWithDefaults) cout << d << " "; // Цикъл по диапазон
    cout << endl;

    // Инициализация чрез списък
    int initList[] = {13, 42, 69};
    cout << "initList: ";
    for (int i : initList) cout << i << " "; // Цикъл по диапазон
    cout << endl;

    return 0;
}

/* range-based for loops (цикли по диапазон), които са въведени в C++11 
  Вместо класическия for цикъл:
  
  for (int i = 0; i < 3; i++) {
    cout << numbers[i] << " ";
  }

можеш да използваш:

  for (int i : numbers) {
    cout << i << " ";
  }

Това работи за масиви, std::vector и всякакви други итераторни структури в C++.
Когато пишеш for (int i : numbers), компилаторът разбира, че искаш да обходиш всички елементи на numbers и да ги съхраниш в i за всяка итерация.

Тази форма е по-четима и по-малко податлива на грешки, особено когато не ти трябва индексът на елемента. */
