#include "../std_lib_facilities.h"

int main()
{
    vector<double> temps;
    double median = 0;
    for(double temp; cin>>temp;)
        temps.push_back(temp);

    // compute median
    if(temps.size()%2 != 0){
    median = temps[temps.size()/2];
    cout<< "Median of the temps is: " << median << '\n';
    }
    else cout << "In this case, there is no median!\n";
}