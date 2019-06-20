#include "std_lib_facilities.h"
#define MY_NAME "Zsolt"

int main()
{
    string first_name;
    string friend_name;
    char friend_sex = 0;
    int age = 0;

    cout<<"For who do you want to write your letter?\n";
    cin>>first_name;
    
    do{
    cout<<"How old is "<< first_name << "?\n";
    cin>>age;
    if(age <= 0 || age > 110)
    cout<<("You're kidding!\n");
    } while(age <= 0 && age > 110);

    cout<<"What is the name of your friend?\n";
    cin>>friend_name;

    do{
    cout<<"Is your friend a male (m) or a female (f)? (type m or f)\n";    
    cin>>friend_sex;
    }while(friend_sex != 'm' && friend_sex != 'f');

    cout<<"\nThe letter looks like this:\n\n";

    cout<<"Dear " << first_name << ",\n\n";
    cout<<"How are you? How is your summer holiday going? I am so curious about it!\n"
        <<"Have you seen "<< friend_name << " lately? ";
        if(friend_sex == 'm') cout<< "If you see "<< friend_name << " please ask him to call me!\n";
        else cout<<"If you see "<< friend_name << " please ask her to call me!\n";
    cout<<"I hear you just had a birthday and you are "<< age << " years old. ";
    if(age < 12)
    cout<<"Next year you will be "<< age+1 << "!\n";
    else if(age == 17)
    cout<<"Next year you will be able to vote!\n";
    else if(age >= 70)
    cout<<"I hope you are enjoying retirement!\n";
    else cout<<'\n';

    cout<<"I am fine by the way. I really miss you. I cannot wait to meet you again!\n"
        <<"Hope you enjoy your holiday! Big hug!\n";
    
    cout<<"\nYours sincerely,\n\n"<< MY_NAME << '\n';
    
}