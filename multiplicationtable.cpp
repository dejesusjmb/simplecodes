#include <iostream>
//This program prints a multiplication table but without using any loops. Recursion is used instead.

int printRow(int count, int max)
{
    if (max==0)
        return 0;
    int x = printRow(count, --max) + count;
    std::cout << x << '\t';
    return x;
}

int printTable(int row, int col)
{
    if (row==0)
        return 1;
    int count = printTable(--row, col);
    int temp = printRow(count, col);
    std::cout << std::endl;
    return ++count;
}

int main()
{
    int row, col;
    std::cout << "Input row: ";
    std::cin >> row;
    std::cout << "Input column: ";
    std::cin >> col;

    printTable(row, col);
    return 0;
}