#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text = "Sarika";
    string key = "qwerty";

    string encrypted_text = "";
    string extended_key = key;
    string ot = "";

    while (extended_key.length() < text.length())
    {
        extended_key += key;
    }
    for (size_t i = 0; i < text.length(); ++i)
    {
        char c = text[i];
        if (isalpha(c))
        {
            bool is_upper = isupper(c);
            char ascii_offset = is_upper ? 'A' : 'a';
            int shift = extended_key[i] - ascii_offset;
            char encrypted_char = char((c - ascii_offset + shift) % 26 + ascii_offset);
            encrypted_text += is_upper ? toupper(encrypted_char) : encrypted_char;
        }
        else
        {
            encrypted_text += c;
        }
    }
    cout << "Encrypted Text : " << encrypted_text << endl;

    for (size_t i = 0; i < encrypted_text.length(); ++i)
    {
        char c = encrypted_text[i];
        if (isalpha(c))
        {
            bool is_upper = isupper(c);
            char ascii_offset = is_upper ? 'A' : 'a';
            int shift = extended_key[i] - ascii_offset;
            char ot_char = char(((((c - ascii_offset - shift) % 26) + 26) % 26) + ascii_offset);
            ot += is_upper ? toupper(ot_char) : ot_char;
        }
        else
        {
            encrypted_text += c;
        }
    }
    cout << "Original text : " << ot << endl;

    return 0;
}