// MegaScryptConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

#include "MegaScrypt.h"
using namespace MegaScrypt;

#include "../MegaScryptLib/MegaScrypt/NativeFunction.h"

Any print(vector<Any> parameters)
{
    for (int i = 0; i < parameters.size(); i++)
    {
        string s = Processor::toString(parameters[i]);
        cout << s << endl;
    }
    return Any();
}

int main()
{
    string script;
    string line;
    Machine machine;

    machine.Declare(new NativeFunction("Print", vector<string>(), print));

    while (true)
    {
        getline(cin, line);
        if (line.size() == 0)
        {
            try
            {
                machine.Execute(script);
            }
            catch (exception ex)
            {
                cout << "Error: " << ex.what() << endl;
            }
            script = "";
        }
        else
        {
            script += line + "\n";
        }
    }
}

