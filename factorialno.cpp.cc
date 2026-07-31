#include<iostream>
using namespace std;
int main()
{
int num,i;
long long facorial=1;
cout <<"enter a number:";
cin>>num;
for(i=1;i<=num;i++)
{
factorial=factorial*i;
}
cout<<"factorial of"<<num<<"="<<factorial;
return 0;
}
