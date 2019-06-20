#include "../std_lib_facilities.h"

// really alpha program for output the repeated word of our sentence...

int main()
{
    string previous = " ";
    string current;
    while(cin>>current){
        if(previous == current)
            cout<<"repeated word: "<<current<<'\n';
    previous = current;
    }
}