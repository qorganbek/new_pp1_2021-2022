#include <iostream>
using namespace std;

void removeVow(string s)
{
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
        {
            continue;
        }
        else
        {
            cout << s[i];
        }
    }
}

int main()
{
    string s;
    getline(cin, s);
    removeVow(s);
}