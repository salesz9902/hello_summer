#include "../std_lib_facilities.h"

int main()
{
    double num1, num2;
    char mathoperator;

    cout<< "Please enter two numbers and a math operation (+, -, *, /)\n";
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