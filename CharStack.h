#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

class CharStack
{
private:
    char* p;   // Указатель на область свободной памяти
    char* tos; // Указатель на вершину стека
    char* bos; // Указатель на дно стека
    int size;  // Размер выделенной памяти для стека

public:
    // Конструктор инициализирует стек с начальным размером
    CharStack(int initialSize);

    // Деструктор освобождает выделенную память
    ~CharStack();

    // Добавление элемента в стек
    void push(char ch);
    // Удаление элемента из стека
    char pop();
    // Проверка, пуст ли стек
    bool isEmpty();
};