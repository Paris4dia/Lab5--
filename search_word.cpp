#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

string to_lower(string s)
{
    for (int i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]);
    return s;
}

int main(int argc, char *argv[])
{
    if (argc < 3) {
        cout << "Використання: ./search файл слово" << endl;
        return 1;
    }
    ifstream f(argv[1]);
    if (!f) {
        cout << "Не можу відкрити файл" << endl;
        return 1;
    }
    string word = to_lower(argv[2]);
    string line;
    int count = 0;
    while (getline(f, line)) {
        if (to_lower(line).find(word) != string::npos) {
            cout << line << endl;
            count++;
        }
    }
    cout << "Знайдено рядків: " << count << "\n";
    return 0;
}

