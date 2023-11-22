// Ceaser Ciper
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string pt;
    cout << "Enter Plain text : ";
    cin >> pt;

    int k = 3;

    string ct;
    string ot;

    for (int i = 0; i < pt.length(); i++)
    {
        if (isupper(pt[i]))
        {
            ct = ct + char(int(((pt[i] + k - 65) % 26) + 65));
            cout << pt[i] << " -> " << ct[i] << endl;
        }
        else
        {
            ct = ct + char(int(((pt[i] + k - 97) % 26) + 97));
            cout << pt[i] << " -> " << ct[i] << endl;
        }
    }

    cout << "---------------" << endl;
    cout << "Encrypted Text : " << ct << endl;
    cout << "---------------" << endl;

    for (int i = 0; i < ct.length(); i++)
    {
        if (isupper(ct[i]))
        {
            ot = ot + char(int(((ct[i] - k - 65) % 26) + 65));
            cout << ct[i] << " -> " << ot[i] << endl;
        }
        else
        {
            ot = ot + char(int(((((ct[i] - k - 97) % 26) + 26) % 26) + 97));
            cout << ct[i] << " -> " << ot[i] << endl;
        }
    }
    cout << "---------------" << endl;
    cout << "Decrypted Text : " << ot << endl;
    cout << "---------------" << endl;

    return 0;
}