#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Birinci sayiyi gir: ";
    if(!(cin >> a)) { cout << "Hatali giriş\n"; return 1; }
    cout << "ikinci sayiyi gir: ";
    if(!(cin >> b)) { cout << "Hatali giriş\n"; return 1; }
    cout << "Sonuc: " << (a + b) << endl;
    return 0;
}