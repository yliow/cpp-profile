#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

void randvector(std::vector< int > & v)
{
    for (auto && e: v) e = rand();
}

void swap(int & a, int & b)
{
    int t = a;
    a = b;
    b = t;
}

void bubblesort(std::vector< int > & v)
{
    int n = v.size();
    for (int i = n - 2; i >= 0; --i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
}
    
int main()
{
    srand((unsigned int) time(NULL));
    std::vector< int > v(100000);
    randvector(v);
    bubblesort(v);
    return 0;
}
