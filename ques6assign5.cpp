// Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.
#include<iostream>
using namespace std;
int main()
{
    
    char i = 'a';
    while(i <= 'z')
    {
        cout<<(int)i<<"-"<<i<<endl;
        i++;
    }
}