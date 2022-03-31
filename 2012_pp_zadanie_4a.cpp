#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int liczby=0;
    ifstream f("cyfry.txt");
    while (f>>a)
    {
        if(a%2==0) liczby++ ;

    }
cout << liczby;


}
