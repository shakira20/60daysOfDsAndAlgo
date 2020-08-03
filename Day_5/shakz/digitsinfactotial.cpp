#include <bits/stdc++.h>
using namespace std ;
void finddigits(int n);
int main()
{
    int n;
    std::cout << "enter a number" << std::endl;
    std::cin >> n;
    finddigits(n);
    return 0;
}
void finddigits(int n)
{
    int fact=1,count=0;
    if (n>1)
    {
    for(int i=1;i<=n;i++)
     {
         fact*=i;
     }
    }
    else
      fact=1;
    while(fact!=0)
    {
       fact=fact/10;
       count++;
    }
     std::cout <<count  << std::endl;   

}