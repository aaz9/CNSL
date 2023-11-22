#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int p;
    long long int alpha;

    cout << "Enter Prime number P : ";
    cin >> p;

    cout << "Enter primitive root alpha : ";
    cin >> alpha;

    long long int xa, xb;
    cout << "Enter Private kay for a : ";
    cin >> xa;
    cout << "Enter Private kay for b : ";
    cin >> xb;

    long long int ya, yb;
    ya = (long long int)pow(alpha, xa);
    ya = (long long int)(ya % p);

    yb = (long long int)pow(alpha, xb);
    yb = (long long int)(yb % p);

    // key genaration
    long long int ka = (long long int)pow(yb, xa);
    ka = (long long int)(ka % p);
    long long int kb = (long long int)pow(ya, xb);
    kb = (long long int)(kb % p);

    cout << "Key of a : " << ka << endl;
    cout << "Key of b : " << kb << endl;

    cout << "----------------- Man In Middle -----------------------" << endl;

    long long int xe;
    cout << "Enter Private kay for e : ";
    cin >> xe;

    long long int ye;
    ye = (long long int)pow(alpha, xe);
    ye = (long long int)(ye % p);
    cout << "ye : " << ye << endl;
    cout << "ye : " << ye << endl;

    long long int ke;
    ka = (long long int)pow(ye, xa);
    ka = (long long int)(ka % p);
    ke = (long long int)pow(ya, xe);
    ke = (long long int)(ke % p);
    cout << "Key of a : " << ka << endl;
    cout << "Key of e : " << ke << endl;
    cout << "-----------------------------" << endl;

    kb = (long long int)pow(ye, xb);
    kb = (long long int)(kb % p);
    ke = (long long int)pow(yb, xe);
    ke = (long long int)(ke % p);
    cout << "Key of b : " << kb << endl;
    cout << "Key of e : " << ke << endl;
    cout << "-----------------------------" << endl;

    return 0;
}