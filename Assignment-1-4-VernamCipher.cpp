#include <bits/stdc++.h>
using namespace std;

int main()
{
    string plain_Text = "Sarika";
    string key = "qwerdvst";

    string encrypted_text = "";
    string decrypted_text = "";

    for (size_t i = 0; i < plain_Text.length(); i++)
    {
        char enc_char = plain_Text[i] ^ key[i % key.length()];
        encrypted_text += enc_char;
    }

    cout << "Original Text : " << plain_Text << endl;
    cout << "Encrypted Text : " << encrypted_text << endl;

    for (size_t i = 0; i < encrypted_text.length(); i++)
    {
        char dec_char = encrypted_text[i] ^ key[i % key.length()];
        decrypted_text += dec_char;
    }
    cout << "Decrypted Text : " << decrypted_text << endl;

    return 0;
}
