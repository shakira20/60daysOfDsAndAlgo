#include <iostream>
using namespace std ;
void pattern (int n) ;
int main()
{
    int n;
    std::cout << "enter the limit" << std::endl;
    std::cin >> n;
    pattern(n);
    return 0;
}
void pattern (int n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0; j<=i;j++)
            {
                std::cout << "*";
            }
          cout<<endl;
        }
    }    