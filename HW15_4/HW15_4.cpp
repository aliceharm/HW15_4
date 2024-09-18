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

int getValueOdd() 
{

    int b = 3;
    while (b > 1 or b<0)
    {
        cout << "If you wont odd number, enter 0, else 1: ";
        cin >> b;
    }
    return b;
}

void printOddNumbers(int a, int b)
{
    cout << "Find numbers: "<< "\n";
    int count;
    for ( count = b; count < a+1; count +=2)
    cout << count << "\n";
}
int main()
{
    int a = getValue();
    int b = getValueOdd();
    printOddNumbers(a, b);
    
    
}