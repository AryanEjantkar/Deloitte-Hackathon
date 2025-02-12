#include<iostream>
using namespace std;
int main()
{

int n;    
cout<<"enter  number of columns\n ";
cin>>n;
int num;
cout<<"enter  number till which you want to print";
cin>>num;

for (int i=0; i <n; i++)
{
    for (int j = 0; j < n;j++)
    {
        cout<<num;
        num++;
    }
    cout<<endl;                         
        
       
}       

  
return 0;
}