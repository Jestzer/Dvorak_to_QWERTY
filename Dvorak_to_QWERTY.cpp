#include <iostream>
#include <map>
#include <string>

using namespace std;

void convertWord(string &str, const map<char, char> &mp)
{
    for (char &c : str)
    {
        // Check if the character exists in the map. If not, leave it alone.
        if (mp.find(c) != mp.end())
        {
            c = mp.at(c); // Transpose the character using the map made below.
        }
    }
}

int main(int argc, char *argv[])
{
    map<char, char> mp = {
        {'a', 'a'}, {'b', 'n'}, {'c', 'i'}, {'d', 'h'}, {'e', 'd'},
        {'f', 'y'}, {'g', 'u'}, {'h', 'j'}, {'i', 'g'}, {'j', 'c'},
        {'k', 'v'}, {'l', 'p'}, {'m', 'm'}, {'n', 'l'}, {'o', 's'},
        {'p', 'r'}, {'q', 'x'}, {'r', 'o'}, {'s', ';'}, {'t', 'k'},
        {'u', 'f'}, {'v', '.'}, {'w', ','}, {'x', 'b'}, {'y', 't'},
        {'z', '/'}, {'?', '{'}, {',', 'w'}, {'.', 'e'}, {'-', '\''},
        {'=', ']'}, {';', 'z'}, {'{', '_'}, {'}', '+'}, {'\\', '\\'},
        {'/', 'z'}, {'A', 'A'}, {'B', 'N'}, {'C', 'I'}, {'D', 'H'},
        {'E', 'D'}, {'F', 'Y'}, {'G', 'U'}, {'H', 'J'}, {'I', 'G'},
        {'J', 'C'}, {'K', 'V'}, {'L', 'P'}, {'M', 'M'}, {'N', 'L'},
        {'O', 'S'}, {'P', 'R'}, {'Q', 'X'}, {'R', 'O'}, {'S', ':'},
        {'T', 'K'}, {'U', 'F'}, {'V', '>'}, {'W', '<'}, {'X', 'B'},
        {'Y', 'T'}, {'Z', '?'}, {'\'', 'q'}, {'"', 'Q'}, {'<', 'W'},
        {'>', 'E'}, {';', 'z'}, {':', 'Z'}, {'-', '\''}, {'_', '"'},

    };

    string output;

    for (int i = 1; i < argc; ++i)
    {
        string word = argv[i];
        convertWord(word, mp);
        output += word + " "; // Add a space between words. We'll see if we need this or not...
    }

    // Output the converted input.
    cout << output << endl;

    return 0;
}
