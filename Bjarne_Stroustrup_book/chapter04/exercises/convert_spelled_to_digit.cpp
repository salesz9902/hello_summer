#include "../std_lib_facilities.h"

// this program is converting spelled-out value into digits

int main()
{
    vector<string> values = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<int> digits = {0,1,2,3,4,5,6,7,8,9};
    //int number;
    string spelled;
    int keepit;

    cout<<"Please enter the spelled form of a number (zero-nine): ";
    cin>>spelled;

    for(int i = 0; i < values.size(); ++i)
    {
        if(values[i] == spelled){
            keepit = i;
            break;
        }
    }

    cout<<"The digit form of your spelled-out value is: " << digits[keepit] << '\n';

}