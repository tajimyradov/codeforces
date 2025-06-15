#include <iostream>
#include <map>
#include<sstream>

using namespace std;

int main()
{
    map<string, int> m;

    int n;
    cin >> n;
    string s;
    stringstream ss;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (m.find(s) == m.end())
        {
            ss << "OK" << endl;
            m[s] = 1;
        }
        else
        {
            ss << s << m[s] << endl;
            m[s]++;
        }
    }
    cout<< ss.str();
    return 0;
}