#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

void create(int* a, int Low, int Max, int N);
template <typename C>
C create2(C* a, C Low, C Max, int N);
void print(int* a, int N);
template <typename P>
P print2(P* a, int N);
template <typename T>
T min1(T* a, int N);
int min2(int* a, int N);

int main()
{
    int N, Low, Max;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand((unsigned)time(NULL));
    cout << "Ітераційний" << endl;
    cout << "Введіть кількість елементів масиву: "; cin >> N;
    cout << "Введіть мінімальне значення елементу масиву: "; cin >> Low;
    cout << "Введіть максимальне значення елементу масиву: "; cin >> Max;
    int* a = new int[N];
    create(a, Low, Max, N);
    print(a, N);
    cout << endl;
    cout << "Найменший серед непарних елементів парних(спосіб без шаблону): " << min2(a, N) << endl;
    create2(a, Low, Max, N);
    print2(a, N);
    cout << endl;
    cout << "Найменший серед непарних елементів парних(спосіб з шаблоном): " << min1(a, N) << endl;
    delete[] a;
}
void create(int* a, int Low, int Max, int N)
{
    for (int i = 0; i < N; ++i)
        a[i] = Low + rand() % (Max - Low + 1);
}
template <typename C>
C create2(C* a, C Low, C Max, int N)
{
    for (int i = 0; i < N; ++i)
        a[i] = Low + rand() % (Max - Low + 1);
    return 0;
}

void print(int* a, int N)
{
    for (int i = 0; i < N; ++i)
        cout << setw(3) << a[i] << " ";
}
template <typename P>
P print2(P* a, int N)
{
    for (int i = 0; i < N; ++i)
        cout << setw(3) << a[i] << " ";
    return 0;
}
template <typename T>
T min1(T* a, int N)
{
    T min = a[0];
    for (int i = 1; i < N - 1; ++i)
    {
        if (a[i] % 2 != 0 && a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
int min2(int* a, int N)
{
    int min = a[0];
    for (int i = 1; i < N - 1; ++i)
    {
        if (a[i] % 2 != 0 && a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}