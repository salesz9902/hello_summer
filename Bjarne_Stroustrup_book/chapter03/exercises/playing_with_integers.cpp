#include "../std_lib_facilities.h"

int main()
{
    // testing with integers
    int val1, val2;

    cout<<"Please enter an integer number: ";
    cin>>val1;
    cout<<"Please enter another integer number: ";
    cin>>val2;

    cout<<"Smaller: "<< val1-1 << " and "<< val2-1<<'\n';
    cout<<"Larger: "<< val1+1 << " and "<< val2+1<<'\n';
    cout<<"Sum: "<< val1+val2 << '\n';
    cout<<"Difference: "<< val1-val2 << '\n';
    cout<<"Product: "<< val1*val2 << '\n';
    cout<<"Ratio: "<< val1/val2 << '\n';

    cout<<'\n';

    // testing with floating numbers
    double val3, val4;

    cout<<"Please enter a floating number: ";
    cin>>val3;
    cout<<"Please enter another floating number: ";
    cin>>val4;

    cout<<"Smaller: "<< val3-1 << " and "<< val4-1<<'\n';
    cout<<"Larger: "<< val3+1 << " and "<< val4+1<<'\n';
    cout<<"Sum: "<< val3+val4 << '\n';
    cout<<"Difference: "<< val3-val4 << '\n';
    cout<<"Product: "<< val3*val4 << '\n';
    cout<<"Ratio: "<< val3/val4 << '\n';


}