#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s,t,rev;
    getline(cin,s);
    getline(cin,t);
    for (string::iterator it = s.begin(); it <s.end(); it++)
    {
        cin>>rev[s.end()-it];
    }
    
    if (!(rev.compare(t)))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
