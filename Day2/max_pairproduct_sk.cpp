#include<bits/stdc++.h>
using namespace std;
int maxpair_product(int arr[],int n)
{
 if (n<2)
{
cout<<"no pairs";
}
esle if(n==2)
{
cout<<arr[0]<<" "<<arr[1];
}
else if(n>2)
{
  int posa=INT_MAX, int posb=INT_MAX;
  int nega=INT_MIN ,negb=INT_MIN;
    for(i=0; i<=n;i++)
     {
        if (arr[i]>posa)
         {
          posb=posa;
          posa=arr[i];
         }
     else if(arr[i]>posb)
      {
      posb=arr[i];
     }
      if (arr[i]<0 && abs (arr[i])>abs(nega))
         {
          negb=nega;
          nega=arr[i];
         }
     else if(arr[i]<0 && abs (arr[i])>abs(negb))
      {
      negb=arr[i];
     }
}
if(nega*negb > posa*posb)
{
 cout<<"max product pair"<<nega<<" "<<negb;
}
else
cout<<"max product paire"<<posa<<" "<<posb;
}
int main ()
{
int arr[]={1,4,7,9,4};
n=sizeof(arr)/sizeof(arr[0]);
maxpair_product(arr,n);
return 0;
}

