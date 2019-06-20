#include "../std_lib_facilities.h"

int main()
{
    // simple program to exercise operators
    float num;
    cout<<"Please enter a floating-point value: ";
    cin>>num;
    cout<<"n == "<< num
        <<"\nn+1 == "<< num+1
        <<"\nthree times n == "<< 3*num
        <<"\ntwice n == "<< num+num
        <<"\nsquared n == "<< num*num
        <<"\nhalf of n == "<< num/2
        <<"\nsquare root of n == "<< sqrt(num)
        << '\n';
}