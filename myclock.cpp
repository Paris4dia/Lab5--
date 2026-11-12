#include <iostream>
#include <ctime>
using namespace std;
void CurrenntTime() {
    time_t now = time(nullptr);
    char* text = ctime(&now);
    if (text != nullptr)
    {
        cout << text;
    }
}

int main(){
    cout << "Вікторія Обухова\n";
    CurrenntTime();
    return 0;
}
