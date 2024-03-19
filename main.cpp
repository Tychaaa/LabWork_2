#include <iostream>
#include <fstream>
#include <stack>
#include <string>
#include <Windows.h>

#include "functions.h"
#include "CharStack.h"

using namespace std;

int main() 
{
    // Устанавливаем русский язык в консоль
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string filename = "input.txt";

    cout << "\t~~Изначальный текст из файла~~" << endl;
    cout << "---------------------------------------------------" << endl;
    printTextFromFile(filename);
    cout << "---------------------------------------------------\n\n" << endl;

    cout << "\t~~Работа со стеком~~" << endl;
    cout << "---------------------------------------------------" << endl;
    printReversedWords(filename);
    cout << "\n---------------------------------------------------\n\n" << endl;

    cout << "\t~~Работа со стеком STL~~" << endl;
    cout << "---------------------------------------------------" << endl;
    printReversedWordsSTL(filename);
    cout << "\n---------------------------------------------------\n\n" << endl;
    return 0;
}