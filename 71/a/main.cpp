#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    stringstream ss;

    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s.length()<= 10)
        {
            ss << s << endl;
            continue;
        }

        ss << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
    }
    cout << ss.str();
    return 0;
}