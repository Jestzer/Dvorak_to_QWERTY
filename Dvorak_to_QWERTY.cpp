#include <iostream>
#include <map>
#include <string>

using namespace std;

void convertWord(string &str)
{
    for (char c : str)
    {
        // Look at the map and convert the character correctly.
    }

    map<char, char> mp;
    mp['b'] = 'x';
    mp['B'] = 'X';
    mp['c'] = 'j';
    mp['C'] = 'J';
    // return the converted word
}

int main(int argc, char *argv[])
{
    string output;

    for (int i = 1; i < argc; ++i)
    {
        // Have each word go through convertWord
    }
    // output the converted input.
}

// a - a
// b - x
// c - j
// d - e
// e - .
// f - u
// g - i
// h - d
// i - c
// j - h
// k - t
// l - n
// m - m
// n - b
// o - r
// p - l
// q - '
// r - p
// s - o
// t - y
// u - g
// v - k
// w - ,
// x - q
// y - f
// z - ;
// ? - Z
// , - w
// . - v
// - - [
// = - ]
// ; - s
// { - ?
// } - +
// \ - \
// / - z