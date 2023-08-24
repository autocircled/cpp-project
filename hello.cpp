#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    try
    {
        int age = 18;
        if (age >= 18)
        {
            cout << "You are old enough to vote!" << endl;
        }
        else
        {
            throw runtime_error("You are not old enough to vote!");
        }
    }
    catch (runtime_error e)
    {
        cout << e.what() << endl;
    }
    return 0;
}