#include "print_up.h"
#include <iostream>
#include <cctype>
using namespace std;

void print_up(string text)
{
    for(int i=0;i < text.length(); i++)
    {
        cout<<(char)toupper(text[i]);
    }
    cout<<'\n';
}
