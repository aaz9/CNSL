#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int p, q;
    cout << "Enter two prime numbers : " << endl;
    cout << "p : ";
    cin >> p;
    cout << "q : ";
    cin >> q;

    long long int n = p * q;
    long long int phi = (p - 1) * (q - 1);

    long long int e;
    cout << "Enter Public key : ";
    cin >> e;

    long long int d, k;
    for (long long int i = 1; i < phi; i++)
    {
        if (((1 + (i * phi)) % e) == 0)
        {
            k = i;
            break;
        }
    }
    d = (1 + (k * phi)) / e;

    cout << "Private Key : " << d << endl;

    // Plain text
    long long int m;
    cout << "Enter Plain text m where m < " << n << " : ";
    cin >> m;

    // Encryption
    long long int encryp_pow = pow(m, e);
    long long int cipherText = fmod(encryp_pow, n);
    cout << "Encryption : " << cipherText << endl;

    // Decryption
    long long int decryp_pow = pow(cipherText, d);
    long long int pt = fmod(decryp_pow, n);
    cout << "Plain Text : " << pt << endl;

    return 0;
}