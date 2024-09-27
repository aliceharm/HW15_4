// HW15_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;




int main()
{
    
    int i, j, m, n;
    cout << "Enter num of rows : "; cin >> m;
    cout << "Enter num of cols : "; cin >> n;

    
    int** arr = new int* [m]; // использую указатель, что бы выделить память под массив указателей
    // а имея доступ к этому массиву указателей, получим доступ к массивам чисел. и потом освободить всю выделенную память.
    for (i = 0; i < m; i++)
    {
       
        arr[i] = new int[n];
        for (j = 0; j < n; j++)
            cout << setfill(' ') << setw(2) << (arr[i][j] = i + j) << " ";
        cout << "\n";
    }
    int sum = 0; 
    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t); 

    for (int x = 0; x < n; x++)
    {
        sum += arr[buf.tm_mday % n][x];
    }
    cout << sum << endl;

        
        

    
    
    
}