#include <iostream>
#include <windows.h>

using namespace std;

int func_add(int x, int y)
{
    return (x + y);
}
int func_sub(int x, int y)
{
    return (x - y);
}


int add(int *start, int *stop)
{
    int summ = 0;
    for (int* tmp = start; tmp != stop; tmp++)
    {
        summ += *tmp;
    }
    return summ;
}

int func_sym(char a, int x, int y)
{
    if (a == '+')
        return func_add(x, y);
    if (a == '-')
        return func_sub(x, y);
}
    
    

int main()
{
    setlocale(LC_ALL, "Russian");
    /*Создайте функцию, которая принимает 2 указателя(на начало и конец массива) 
    и которая возвращает сумму всех элементов массива.*/
    int A[] = { 1, 2, 3, 9, 8, 7 };
    int* begin = std::begin(A);
    int* end = std::end(A);
    cout << "Сумма элементов массива равна = ";
    cout << add(begin, end) << endl<<endl;

    cout<<func_sym( '+', 100, 10);


    float* var1 = new float (12.5f);
    cout << endl << *var1;
    delete var1;

}
