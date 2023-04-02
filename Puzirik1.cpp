
#include <iostream>
using namespace std;


int main()
{
    int array[10];
    int time = 0; 
    int max = 9;

    cout << "Hello World!\n";

    for (int i = 0; i < 10; i++)  // Заполнение массива 
    {
        cin >> array[i];
    }
    
    for (int b = 0; b < 10; b++)
    {
        for (int j = 0; j < max; j++) // Меняем местами два числа
        {
            if (array[j] > array[j + 1])
            {
                time = array[j + 1];
                array[j + 1] = array[j];
                array[j] = time;
            }
        }
        max--;
    }
    for (int a = 0; a < 10; a++)  // Заполнение массива 
    {
        cout << array[a] << ", ";
    }
}

