#include "../std_lib_facilities.h"

int main()
{
    char button;
    string answer;
    cout<<"Hello friend! Please think about a number between 1 and 100\n"
        <<"If you are ready, press a button.\n";
    cin>>button;
    cout<<"So is the number you are thinking of bigger than 50? (yes or no)\n";
    cin>>answer;

    if(answer == "yes"){
        cout<<"Oh, good!\n Is the number bigger than 75?\n";
    }
    else {
        cout<< "Is it smaller than 25?";
        cin>>answer;
        if (answer == "yes");
    }
}