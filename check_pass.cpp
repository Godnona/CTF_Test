#include <iostream>
#include <string>
using namespace std;

int main()
{
    string secret = "GMBH|D0ef_Cb4t1d~";
    bool flag = true;

    string s; getline(cin, s);
    if(s.length() != secret.length())
    {
        cout << "Sai mat khau!";
        return 0;
    }

    int n = s.length() - 1;
    for(int i = 0; i <= n/2; i++)
    {
        char c = char(s[i] + 1);
        if(c != secret[i])
        {
            flag = false;
            break;
        }

        char d = char(s[n-i] + 1);
        if(d != secret[n - i])
        {
            flag = false;
            break;
        }
    }

    if(flag == true)
        cout << "Chinh xac! Ban da tim ra Flag.";
    else
        cout << "Sai mat khau!";

    return 0;
}