#include "../std_lib_facilities.h"

int main()
{
    string first_name = "???"; // by default its "???", so if the output is that, we don't know the name
    double age = -1; // by default its -1, if the output is -1, we dont know the age
    cout<<"Please enter your first name, and your age: \n";
    cin>>first_name>>age;
    cout<<"Hello, "<<first_name<<" (age in months: "<<age*12<<")\n";
    
}