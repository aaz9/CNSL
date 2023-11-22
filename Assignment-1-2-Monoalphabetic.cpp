#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text = "Aditya";
    string key = "qwertyuiopasdfghjklzxcvbnm";

    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string encrypted_text = "";

    for (char c : text)
    {
        if (isalpha(c))
        {
            bool is_upper = isupper(c);
            char lower_c = tolower(c);
            size_t index = alphabet.find(lower_c);
            char encrypted_char = is_upper ? toupper(key[index]) : key[index];
            encrypted_text += encrypted_char;
        }
        else
        {
            encrypted_text += c;
        }
    }
    cout << "Encrypted Text : " << encrypted_text << endl;
    string ot = "";
    for (char c : encrypted_text)
    {
        if (isalpha(c))
        {
            bool is_upper = isupper(c);
            char lower_c = tolower(c);
            size_t index = key.find(lower_c);
            char ot_char = is_upper ? toupper(alphabet[index]) : alphabet[index];
            ot += ot_char;
        }
    }
    cout << "Original Text : " << ot << endl;

    return 0;
}