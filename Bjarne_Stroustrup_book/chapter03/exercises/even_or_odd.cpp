#include "../std_lib_facilities.h"

int main()
{
    int number;
    cout<<"Please enter a number: ";
    cin>>number;

    if (number % 2 == 0) cout<<"The value "<< number << " is an even number.\n";
    else cout<<"The value "<< number << " is an odd number.\n";
}