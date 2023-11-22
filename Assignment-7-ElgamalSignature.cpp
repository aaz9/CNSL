#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int p, alpha;
    cout << "Enter the Prime Number P : ";
    cin >> p;

    cout << "Enter Primitive Root alpha : ";
    cin >> alpha;

    // Private Key of X : Xa such that 1 < Xa < p-1
    long long int xa;
    cout << "Enter private key : ";
    cin >> xa;

    // Public Key of Sender : {p , alpha, Ya}
    double yaa = pow(alpha, xa);
    long long int ya;
    ya = yaa;
    ya = ya % p;
    cout << "Ya : " << ya << endl;

    // m = H(M) such that 0 <= m <= p-1
    long long int m;
    cout << "Enter m : ";
    cin >> m;

    // K such that 1 <= K <= q-1 and gcd(K, q-1) = 1
    long long int k;
    cout << "Enter a random integer K such that 1 <= K <= q-1 and gcd(K, q-1) = 1 : ";
    cin >> k;

    // Calculating Digital Signature Pair

    // S1
    double s11 = pow(alpha, k);
    long long int s1 = s11;
    s1 = s1 % p;
    cout << "S1 : " << s1 << endl;

    // S2
    long long int k_inverse;
    for (long long int i = 1; i < p - 1; i++)
    {
        if (((k * i) % (p - 1)) == 1)
        {
            k_inverse = i;
            break;
        }
    }
    cout << "K_inverse : " << k_inverse << endl;

    long long int s2;
    s2 = (p - 1) - (abs(k_inverse * (m - (xa * s1))) % (p - 1));
    cout << "S2 : " << s2 << endl;

    // Validation at receiver

    // v1
    double v11 = pow(alpha, m);
    long long int v1 = v11;
    v1 = v1 % p;
    cout << "V1 : " << v1 << endl;

    // v2
    long long int v2;

    double ans11 = pow(ya, s1);
    long long int ans1 = ans11;
    cout << "ans1 : " << ans1 << endl;

    double ans22 = pow(s1, s2);
    long long int ans2 = ans22;
    cout << "ans2 : " << ans2 << endl;

    v2 = (ans1 * ans2) % p;
    cout << "V2 : " << v2 << endl;

    if (v1 == v2)
    {
        cout << "Digital Sugnature is Valid !!!" << endl;
    }
    else
    {
        cout << "Digital Sugnature is Not Valid !!!" << endl;
    }
    return 0;
}
