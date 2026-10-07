#include <iostream>
using namespace std;
int main()  {
    char a = 'b';
    for(int i = 1; i <= 26; i = i + 1)  {
        cout << a, a = (char)'b' + 1;
    }
    return 0;
}