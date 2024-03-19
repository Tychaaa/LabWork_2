#pragma once
#include <iostream>
#include <fstream>
#include <stack>
#include <string>

#include "CharStack.h"

using namespace std;

// Функция для печати текста из файла в изначальном виде
void printTextFromFile(const string& filename);

// Функция для печати слов в текстовом файле в обратном порядке
void printReversedWords(const string& filename);

// Функция для печати слов в текстовом файле в обратном порядке (STL)
void printReversedWordsSTL(const string& filename);