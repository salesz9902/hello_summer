#include "std_lib_facilities.h"

int main()
{
    int num = 1;
    int step = 0;

    while (num != 0)
    {
        num <<= 1;
        cout << num << '\n';
        step++;
    }

    cout << "A változónk " << step << " lépés után lesz 0.\n";
}