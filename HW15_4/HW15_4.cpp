// HW15_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int getValue()
{
    cout << "enter your number: ";
    int a;
    cin >> a;
    return a;
}

void printOddNumbers(int a)
{
    cout << "Find Odd numbers: "<< "\n";
    for (int count = 0; count < a+1; count +=2)
    cout << count << "\n";
}
int main()
{
    int a = getValue();
    printOddNumbers(a);

    
    
}