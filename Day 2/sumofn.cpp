#include <iostream>
using namespace std ;
 int main()
{
 int n ,sum =0;
cout<<"enter the limit"<<"\n";
cin>>n;
sum =sum_of_natural(n);
cout<<sum;
int sum_of_natural(& n)
 {
return   n*(n+1)/2;

}
 
return 0;
}



