#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream nibs;

    nibs.open("nibs.txt", ios::out);

    if (!nibs)
    {
        cout << "file not created" << endl;
    }
    else
    {
        cout << "file created successfully" << endl;
    }

    nibs << "Today is Monday dont forget to do your homework" << endl;

    nibs.close();

    return 0;
}