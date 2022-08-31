#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
   char c = ' ';
    char ch = ' ';
    string pass = "";
    string ps = "";
    cout<<"Enter Password: \n";
    while (c != 13)
    {
        c = _getch();
        if (c == 13)
        {
            break;
        }
        if (c == 8)
        {
            if (pass.size() != 0)
            {
                cout << "\b \b";
                pass.erase(pass.size() - 1);
            }
        }
        if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
        {

            pass += c;
            cout << "*";
        }

       
    }
    cout<<"\nConfirm Password: \n";
     while (ch != 13)
    {
        ch = _getch();
        if (ch == 13)
        {
            break;
        }
        if (ch == 8)
        {
            if (pass.size() != 0)
            {
                cout << "\b \b";
                pass.erase(pass.size() - 1);
            }
        }
        if ((ch > 47 && ch < 58) || (ch > 64 && ch < 91) || (ch > 96 && ch < 123))
        {

            ps += ch;
            cout << "*";
        }

       
    }
     if (pass == ps)
        {
                return 1;
        }

        else
        {
            return 0;
        }

    return 0;
}