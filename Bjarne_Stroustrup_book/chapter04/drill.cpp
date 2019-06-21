#include "std_lib_facilities.h"

int main()
{
    constexpr double m_in_cm = 100;
    constexpr double in_in_cm = 2.54;
    constexpr double ft_in_in = 12;

    double num1;
    vector<double> values;
    double smallest = 0, largest = 0;
    string unit;
    bool first = true;
    int num_of_values = 0;
    double sum_of_values_in_m = 0;

    while(cin>>num1>>unit)
    {
        if(unit == "cm" || unit == "ft" || unit == "in" || unit == "m" )
        {
            if (first){
                largest = smallest = num1;
                first = false;
            }
            if(unit == "m") {
                cout<<num1<<unit<<" = "<<num1*m_in_cm <<"cm"<<'\n';
                sum_of_values_in_m += num1;
                values.push_back(num1);
            }
            if(unit == "cm") {
                cout<<num1<<unit<<" = "<<num1 <<"cm"<<'\n';
                sum_of_values_in_m += num1/m_in_cm;
                values.push_back(num1/m_in_cm);
            }
            if(unit == "ft") {
                cout<<num1<<unit<<" = "<<num1*ft_in_in <<"in"<<'\n';
                sum_of_values_in_m += ((num1*ft_in_in)*in_in_cm)/m_in_cm;
                values.push_back(((num1*ft_in_in)*in_in_cm)/m_in_cm);
            }
            if(unit == "in") {
                cout<<num1<<unit<<" = "<<num1*in_in_cm <<"cm"<<'\n';
                sum_of_values_in_m += (num1*in_in_cm)/m_in_cm;
                values.push_back((num1*in_in_cm)/m_in_cm);
            }
            
            if(num1 > largest){
                largest = num1; 
            } 
            if(num1 < smallest){
                smallest = num1;
            }
            ++num_of_values;
        }
        else cout << "I dont know unit called "<< unit <<'\n';
    }
    cout<< "The smallest number of values is " << smallest << '\n';
    cout<< "The largest number of values is " << largest << '\n';
    cout<< "The number of values is " << num_of_values << '\n';
    cout<< "The sum of values is " << sum_of_values_in_m << " m" << '\n';

    sort(values);

    for(int i = 0; i < values.size(); ++i)
    {
        cout<< values[i] << " m\n";
    }
}
/*
    while(cin>>num1>>num2)
    {
        if(num1 < num2) {
        if(num2-num1 < 1.0/100) cout<< "The numbers are almost equal!\n";
        else{
        cout<<"The smaller value is: "<< num1 << '\n';
        cout<<"The higher value is: "<<num2 << '\n';
        }
        }
        else if(num2 < num1){
        if(num1-num2 < 1.0/100) cout<< "The numbers are almost equal!\n";
        else{
        cout<<"The smaller value is: "<< num2 << '\n';
        cout<<"The higher value is: "<<num1 << '\n';
        }
        }
        else cout<< "The numbers are equal!\n";
    } */
    
