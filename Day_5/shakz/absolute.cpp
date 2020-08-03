#include <iostream>
using namespace std;
void absolute(int n);
int main()
{
    int n;
    std::cout << "enter a number" << std::endl;
    std::cin >> n;
    absolute(n);
    return 0;
}
void absolute (int n)
{
    if(n<0)
    {
        n=(-1)*n;
        
    }
    cout<< n;
}
