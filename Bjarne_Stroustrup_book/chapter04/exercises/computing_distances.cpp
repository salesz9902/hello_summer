#include "../std_lib_facilities.h"

int main()
{
    vector<double> distances;
    double total_distance = 0, mean_distance = 0;

    for(double distance; cin>>distance;)
    {
        distances.push_back(distance);
        total_distance += distance;
    }

    double smallest, greatest;
    smallest = greatest = distances[0];

    for(int i = 0; i < distances.size(); ++i)
    {
        if(smallest > distances[i])
            smallest = distances[i];

        if(greatest < distances[i])
            greatest = distances[i];
    }
    // computing the total distance
    cout<<"The total distance is: " << total_distance << '\n';

    // printing the smallest and greatest distance
    cout<<"Smallest distance is: " << smallest << '\n'
        <<"Greatest distance is: " << greatest << '\n';

    // computing the mean distance
    mean_distance = total_distance/distances.size();
    cout<<"The mean distance is: " << mean_distance << '\n';
}