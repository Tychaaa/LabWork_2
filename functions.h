#pragma once
#include <iostream>
#include <fstream>
#include <stack>
#include <string>

#include "CharStack.h"

using namespace std;

// ������� ��� ������ ������ �� ����� � ����������� ����
void printTextFromFile(const string& filename);

// ������� ��� ������ ���� � ��������� ����� � �������� �������
void printReversedWords(const string& filename);

// ������� ��� ������ ���� � ��������� ����� � �������� ������� (STL)
void printReversedWordsSTL(const string& filename);