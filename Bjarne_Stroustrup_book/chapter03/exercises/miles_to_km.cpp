#include "../std_lib_facilities.h"

// this program is converting miles to kilometers

int main()
{
    int miles = 0;
    double km = 0;

    cout<<"Please give an amount of miles: ";
    cin>>miles;

    km = miles*1.609344;

    cout<< miles <<" miles is " << km << " kilometers.\n";
}