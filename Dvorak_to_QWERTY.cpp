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
        {'a', 'a'}, {'b', 'x'}, {'c', 'j'}, {'d', 'e'}, {'e', '.'},
        {'f', 'u'}, {'g', 'i'}, {'h', 'd'}, {'i', 'c'}, {'j', 'h'},
        {'k', 't'}, {'l', 'n'}, {'m', 'm'}, {'n', 'b'}, {'o', 'r'},
        {'p', 'l'}, {'q', '\''}, {'r', 'p'}, {'s', 'o'}, {'t', 'y'},
        {'u', 'g'}, {'v', 'k'}, {'w', ','}, {'x', 'q'}, {'y', 'f'},
        {'z', ';'}, {'?', 'Z'}, {',', 'w'}, {'.', 'v'}, {'-', '['},
        {'=', ']'}, {';', 's'}, {'{', '?'}, {'}', '+'}, {'\\', '\\'},
        {'/', 'z'}, {'A', 'A'}, {'B', 'X'}, {'C', 'J'}, {'D', 'E'},
        {'E', '>'}, {'F', 'U'}, {'G', 'I'}, {'H', 'D'}, {'I', 'C'},
        {'J', 'H'}, {'K', 'T'}, {'L', 'N'}, {'M', 'M'}, {'N', 'B'},
        {'O', 'R'}, {'P', 'L'}, {'Q', '"'}, {'R', 'P'}, {'S', 'O'},
        {'T', 'Y'}, {'U', 'G'}, {'V', 'K'}, {'W', '<'}, {'X', 'Q'},
        {'Y', 'F'}, {'Z', ':'}
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
