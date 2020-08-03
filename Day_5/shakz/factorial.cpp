#include <bits/stdc++.h>
using namespace std;
long long factorial(int n);
int main()
{
    int n;
    std::cout << "enter the number" << std::endl;
    cin >> n ;
    factorial(n);
    return 0;
}
long long factorial(int n)
{
    int factorial=1;
    for(int i=1;i<=n;i++)
     factorial=factorial*i;
     cout<<factorial;
}
