#include<iostream>
using namespace std;
void show(int a, int b)// function overloading
{

cout << a+b<<"\n";
}
void display(int a)
{
    cout<<a*a<<"\n";
}
int main()
{
    show(2,8);
    display(5);
}