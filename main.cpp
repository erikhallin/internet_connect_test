#include <iostream>
#include <string>

#include "networkCom.h"

using namespace std;

int main()
{
    cout<<"Network Testing: Start\n";

    //pick server or client
    cout<<"(S)erver or (C)lient?: ";
    string user_input;
    getline(cin,user_input);
    if(user_input=="S"||user_input=="s"||user_input=="Server"||user_input=="server")
    {
        cout<<"You are the SERVER\n";
    }
    else if(user_input=="C"||user_input=="c"||user_input=="Client"||user_input=="client")
    {
        cout<<"You are a CLIENT\n";
    }
    else
    {
        cout<<"ERROR: Bad input\n";
        return 1;
    }


    cout<<"Complete\n";
    return 0;
}
