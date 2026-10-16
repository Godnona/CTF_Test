#include <iostream>
#include <string>
using namespace std;

int main()
{
    string secret = "GMBH|D0ef_Cb4t1d~";

    string s; getline(cin, s);
    string res;
    int n = s.length();
    for(int i = 0; i < n; i++)
    {
        char c = s[i];
        res += char(c + 1);
    }
    if(res == secret)
        cout << "Chinh xac! Ban da tim ra Flag.";
    else
        cout << "Sai mat khau!";

    return 0;
}