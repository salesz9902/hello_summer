#include "../std_lib_facilities.h"

int isPrime(int number){
    bool prime = true;
    if(number > 2 && number%2 == 0)
    return false;
    else return true;
    for(i = number/2; i > 1; --i){
        if (number % i == 0) prime = false;
    }
    if(prime == true) return true;
    

}

int main(){
    vector<int> primes;
    int number;

    for (int i = 0; i < 100; ++i)
    {
        //primes.push(i)
        if (isPrime(i)) cout<< i << " ";
    }
}