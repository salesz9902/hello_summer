#include "std_lib_facilities.h"

int main()
{
    try{
        //Cout <<"Success!\n";
        // c++ and many other languages are letter-sensitive, so its an error starting with the upper C

        //cout <<"Success!\n;
        // missing the pair of the "

        //cout <<"Success" << !\n"
        // put an ; instead of " in the end

        //cout << success << '\n';
        // it takes success as a variable what is not declared here...

        //string res = 7; vector<int> v(10); v[5]=res; cout<<"Success!\n";
        // cannot give a numeric value for a string, cannot give a string as an element of an integer vector

        //vector<int> v(10); v(5)=7; if(v(5)!=7) cout << "Success!\n";
        // it's not right: v(5)=7, write this: v[5], so [] instead of ()

        //if (cond) cout<< "Success!\n"; else cout<< "Fail!\n";
        // cond must be declared..

        //bool c=false; if(c) cout<< "Success!\n"; else cout<< "Fail!\n";
        // it works totally fine

        //string s="ape"; boo c="fool"<s; if (c) cout << "Success!\n";
        // its not boo, its bool and cant be equal to "fool".. this line is a mess

        //string s ="ape"; if(s=="fool") cout<< "Success!\n";
        // it works fine as well

        //string s ="ape"; if(s=="fool") cout< "Success!\n";
        // a < is missing after cout..

        //string s ="ape"; if(s+"fool") cout< "Success!\n";
        // its also a mess.. the if statement is totally bad... cout missing a < again..

        //vector<char> v(5); for(int i=0;0<v.size();++i); cout<<"Success!\n";
        // it contains semantic errors, so we are going to fall into an infinite loop

        //vector<char> v(5); for(int i=0;i<=v.size();++i); cout<<"Success!\n";
        // no compile-error, but also semantic error: there is a ; after the for loop, its not right

        //string s = "Success!\n"; for(int i=0; i<6; ++i) cout<< s[i];
        // its not going to write the s variable at all.. the output is gonna be: Succes

        //if (true) then cout<<"Success!\n"; else cout << "Fail!\n";
        // the "then" word is unknown for c++

        //int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
        // c cant be equal to any number bigger than 255

        //string s = "Success!\n"; for(int i=0; i<10; ++i) cout << s[i];
        // its a totally fine program -> the s variable is exactly 10 characters long

        //vector v(5); for (int i=0; i<=v.size(); ++i); cout<< "Success!\n";
        // the type of the vector is missing... so: vector<type> v(5);

        //int i=0; int j=9; while(i<10) ++j; if(j<i) cout<<"Success!\n";
        // we are falling into an infinite loop again..

        //int x=2; double d = 5/(x-2); if(d==2*x+0.5) cout << "Success!\n";
        // gives a runtime error message: floating point exception (core dumped)

        //string<char> s="Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
        // its a mess again.. like string<char> is not existing in c++...

        //int i=0; while(i<10) ++j; if(j<i) cout<<"Success!\n";
        // the j variable is not declared..

        //int x=4; double d = 5/(x-2); if (d=2*x+0.5) cout<< "Success!\n";
        // in the if statement its not checking for the variable's value, its giving it a new one..

        //cin<<"Success!\n";
        // its cin>> and not <<
        keep_window_open();
        return 0;
    }
    catch(exception& e){
        cerr << "error: "<< e.what() << '\n';
        keep_window_open();
        return 1;
    }
    catch(...){
        cerr << "Oops: unknown exception!\n";
        keep_window_open();
        return 2;
    }
}