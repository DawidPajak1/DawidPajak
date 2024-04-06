#include <iostream>
using namespace std;

int miejscowoscZamieszkania=1, iloscMinutDojazdu=0;
int main()
{
    while(miejscowoscZamieszkania<=100000000)
    {
        iloscMinutDojazdu +=7;
        miejscowoscZamieszkania *=2;
        cout << "Mineło minut: " << iloscMinutDojazdu << endl;
        cout << "Liczba zamieszkanych osób: " << miejscowoscZamieszkania << endl;
    }

    return 0;
}
