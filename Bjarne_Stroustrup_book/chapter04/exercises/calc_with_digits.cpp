#include "../std_lib_facilities.h"

// this is the same program like the simple_calculator, but with just digits

int main()
{
    double num1, num2;
    char mathoperator;
    vector<string> values = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<int> digits = {0,1,2,3,4,5,6,7,8,9};
    int number;

    cout<< "Please enter two digits and a math operation (+, -, *, /)\n";
    cin>>num1>>num2>>mathoperator;

    if(mathoperator == '+'){
        cout << "The sum of " << num1 << " and " << num2 << " is " << num1+num2 << '\n';
    }
    else if (mathoperator == '-'){
        cout << "The diff of " << num1 << " and " << num2 << " is " << num1-num2 << '\n';
    }
    else if (mathoperator == '*'){
        cout << "The multiply of " << num1 << " and " << num2 << " is " << num1*num2 << '\n';
    }
    else if (mathoperator == '/'){
        cout << "The ratio of " << num1 << " and " << num2 << " is " << num1/num2 << '\n';
    }
    else cout<< "I dont know any math operator like that.\n";

}