#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

void create(int* a, int Low, int Max, int N, int i);
template <typename C>
C create2(C* a, C Low, C Max, int N, int i);
void print(int* a, int N, int i);
template <typename P>
P print2(P* a, int N, int i);
template <typename T>
T min1(T* a, int N, int i, T j);
int min2(int* a, int N, int i, int j);

int main()
{
    int N, Low, Max;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand((unsigned)time(NULL));
    cout << "Рекурсивний" << endl;
    cout << "Введіть кількість елементів масиву: "; cin >> N;
    cout << "Введіть мінімальне значення елементу масиву: "; cin >> Low;
    cout << "Введіть максимальне значення елементу масиву: "; cin >> Max;
    int* a = new int[N];
    create(a, Low, Max, N, 0);
    print(a, N, 0);
    cout << "\nНайменший серед непарних елементів (спосіб з шаблоном): " << min1(a, N, 1, a[0]) << endl;
    create2(a, Low, Max, N, 0);
    print2(a, N, 0);
    cout << endl;
    cout << "Найменший серед непарних елементів (спосіб без шаблону): " << min2(a, N, 1, a[0]) << endl;
    delete[] a;
}
void create(int* a, int Low, int Max, int N, int i)
{
    if (i < N)
    {
        a[i] = Low + rand() % (Max - Low + 1);
        create(a, Low, Max, N, ++i);
    }
}
template <typename C>
C create2(C* a, C Low, C Max, int N, int i)
{
    if (i < N)
    {
        a[i] = Low + rand() % (Max - Low + 1);
        create2(a, Low, Max, N, ++i);
    }
    else
        return 0;
}
void print(int* a, int N, int i)
{
    if (i < N)
    {
        cout << setw(3) << a[i] << " ";
        print(a, N, ++i);
    }
}
template <typename P>
P print2(P* a, int N, int i)
{
    if (i < N)
    {
        cout << setw(3) << a[i] << " ";
        print2(a, N, ++i);
    }
    else
        return 0;
}
template <typename T>
T min1(T* a, int N, int i, T min)
{
    if (i < N)
    {
        if (a[i] % 2 != 0 && a[i] < min)
        {
            min = a[i];
        }
        min1(a, N, ++i, min);
    }
    else
        return min;
}
int min2(int* a, int N, int i, int min)
{
    if (i < N)
    {
        if (a[i] % 2 != 0 && a[i] < min)
        {
            min = a[i];
        }
        min2(a, N, ++i, min);
    }
    else
        return min;
}