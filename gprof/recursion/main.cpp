#include <iostream>

void f(int n)
{
    if (n == 0) return;
    else
    {
        int s = 0;
        for(int i = 0; i < 1000000; ++i) s += i * i * i * i;
        f(n - 1);
    }
}

void g(int);
void h(int);

void g(int n)
{
    if (n == 0) return;
    else
    {
        int s = 0;
        for(int i = 0; i < 1000000; ++i) s += i * i * i * i;
        h(n - 1);
    }
}

void h(int n)
{
    if (n == 0) return;
    else
    {
        int s = 0;
        for(int i = 0; i < 1000000; ++i) s += i * i * i * i;
        g(n - 1);
    }
}

int main()
{
    f(10);
    g(10);
    return 0;
}
