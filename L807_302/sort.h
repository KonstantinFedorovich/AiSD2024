#ifndef SORT_H
#define SORT_H

#define MAXLEN 2 // ���������� ��������, ������� ������ �� ����� � ���� ���������

struct Cell {
    int cost;    // ��������� ��������� � ������ ������
    int parent;  // ������������ ������
};

Cell m[MAXLEN + 1][MAXLEN + 1]; // ������� ������������� ����������������

#endif // L807_302_H