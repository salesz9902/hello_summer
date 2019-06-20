#include "../std_lib_facilities.h"

// pennies (1-cent coins), nickels (5-cent coins), dimes (10-cent coins)
// quarters (25-cent coins), half-dollars (50-cent coins), one dollar (100-cent coins)

int main()
{
    int pennies, nickels, dimes, quarters, halfdollars, onedollar;
    double cents;
    cout<<"Enter your number of...\n"
        <<"pennies: ";
    cin>>pennies;
    cout<<"nickels: ";
    cin>>nickels;
    cout<<"dimes: ";
    cin>>dimes;
    cout<<"quarters: ";
    cin>>quarters;
    cout<<"half-dollars: ";
    cin>>halfdollars;
    cout<<"one-dollar: ";
    cin>>onedollar;

    cout<<"You have "<< pennies << " pennies.\n"
        <<"You have "<< nickels << " nickels.\n"
        <<"You have "<< dimes << " dimes.\n"
        <<"You have "<< quarters << " quarters.\n"
        <<"You have "<< halfdollars << " half-dollars.\n"
        <<"You have "<< onedollar << " one dollar.\n";

    cents = pennies * 1 + nickels * 5 + dimes * 10 + quarters * 25 + halfdollars * 50 + onedollar * 100;
    
    cout << "The value of all of your coins is "<< cents <<" cents, which is $" << cents/100 << ".\n";
}