#include<iostream>
using namespace std;
void show(int a, int b)
{

    cout << a + b << "\n";
}
void show (int a )
{
    cout<<a*a<<"\n";

}
int main()
{
    show (2);
    show(5,6);
}