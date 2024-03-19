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
    // ������������� ������� ���� � �������
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string filename = "input.txt";

    cout << "\t~~����������� ����� �� �����~~" << endl;
    cout << "---------------------------------------------------" << endl;
    printTextFromFile(filename);
    cout << "---------------------------------------------------\n\n" << endl;

    cout << "\t~~������ �� ������~~" << endl;
    cout << "---------------------------------------------------" << endl;
    printReversedWords(filename);
    cout << "\n---------------------------------------------------\n\n" << endl;

    cout << "\t~~������ �� ������ STL~~" << endl;
    cout << "---------------------------------------------------" << endl;
    printReversedWordsSTL(filename);
    cout << "\n---------------------------------------------------\n\n" << endl;
    return 0;
}