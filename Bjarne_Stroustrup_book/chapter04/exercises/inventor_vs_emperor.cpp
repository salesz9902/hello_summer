#include "../std_lib_facilities.h"

int main()
{
    int current_square = 0, num_of_grains = 0;
    double grains_of_rice = 0;
    bool thousand = true, million = true, billion = true;

    for (int i = 1; i < 64; ++i){
        current_square = i;
        num_of_grains = pow(2,i);
        grains_of_rice += pow(2,i);

        if(grains_of_rice >= 1000 && thousand == true){
            cout<< "1000 grains of rice require: " << current_square << " squares which is " << grains_of_rice << " grains of rice"<<'\n';
            thousand = false; 
        }
        if(grains_of_rice >= 1000000 && million == true){
            cout<< "1000000 grains of rice require: " << current_square << " squares which is " << grains_of_rice << " grains of rice"<<'\n';
            million = false; 
        }
        if(grains_of_rice >= 1000000000 && billion == true){
            cout<< "1000000000 grains of rice require: " << current_square << " squares which is " << grains_of_rice << " grains of rice"<<'\n';
            billion = false; 
        }
    }
}