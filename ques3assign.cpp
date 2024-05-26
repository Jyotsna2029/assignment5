#include<iostream>
using namespace std;
int main()
{
  
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    for(int i = n; i<= 10*n ; i += n)
    {
        cout<<i<<endl;
    }

}