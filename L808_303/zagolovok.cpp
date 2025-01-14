#ifndef L808_303_H
#define L808_303_H

#define MAXLEN 2 // ������������ ����� ����� ��� ������������� ����������������

struct Cell {
    int cost;    // ��������� ��������� � ������ ������
    int parent;  // ������������ ������
};

extern Cell m[MAXLEN + 1][MAXLEN + 1]; // ������� ������������� ����������������

// ��������� �������
void row_init(int i);              // ������������� ������ �������
void column_init(int i);           // ������������� ������� �������
int match(char a, char b);         // ���������� ��������� ����������
int insert(char c);                // ���������� ��������� �������
int del(char c);                   // ���������� ��������� ��������
void goal_cell(const char* s, const char* t, int* i, int* j); // ����������� ������� ������

#endif // L808_303_H