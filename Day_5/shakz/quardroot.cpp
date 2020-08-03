#include <bits/stdc++.h>
using namespace std;
void gpterm(int a,int r,int n);
int main()
{
    int a,b,n;
    std::cout << "enter the first term "<< std::endl;
    cin >> a;
    cout<<"enter the ratio";
    cin >> b;
    std::cout << "enter the position" << std::endl;
    cin >> n;
    gpterm(a,b,n);
    return 0;
}
void gpterm (int a,int r,int n)
{ 
    int term=0;
    term=a*(pow(r,n-1));
    cout<<term;
}