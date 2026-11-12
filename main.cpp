#include "print_up.h"
#include <iostream>
#include <string>

using namespace std;
int main(int argc, char * argv[])
{
    string text;
    getline(cin, text);
    print_up(text);
    return 0;
}
