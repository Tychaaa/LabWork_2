#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

class CharStack
{
private:
    char* p;   // ��������� �� ������� ��������� ������
    char* tos; // ��������� �� ������� �����
    char* bos; // ��������� �� ��� �����
    int size;  // ������ ���������� ������ ��� �����

public:
    // ����������� �������������� ���� � ��������� ��������
    CharStack(int initialSize);

    // ���������� ����������� ���������� ������
    ~CharStack();

    // ���������� �������� � ����
    void push(char ch);
    // �������� �������� �� �����
    char pop();
    // ��������, ���� �� ����
    bool isEmpty();
};