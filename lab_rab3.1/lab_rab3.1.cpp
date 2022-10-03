#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int var1 = 100;
    int* var0;
    var0 = &var1;
    cout << "Адресс перемнной - "<< var0 << endl;
    cout << "Значение переменной = " << *var0 << endl;
    *var0 = 1;
    cout << "Измененное значение переменной = " << var1 << endl;


    int A[3] = { 1, 2, 3 };
    cout << "{ "<< *A;
    for (int i = 1; i <= 2; i++)
    {
        cout << ", " << *(A + i);
    }
    cout << " }"<<endl;

    int var2 = 5;
    int* const var02 = &var2;
    cout << "Значение переменной до изменения = " << var2 << endl;
    *var02 = 111;
    cout<< "Значение переменной после изменения = " << var2 << endl;

}


