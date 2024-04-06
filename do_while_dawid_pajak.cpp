#include <iostream>
using namespace std;

int miejscowoscZamieszkania=1, iloscMinutDojazdu=0;
int main()
{
    do
    {
        iloscMinutDojazdu +=5;
        miejscowoscZamieszkania *=4;
        cout << "Mineło minut: " << iloscMinutDojazdu << endl;
        cout << "Liczba zamieszkanych osób: " << miejscowoscZamieszkania << endl;
    }
    while(miejscowoscZamieszkania<=100000000);

    return 0;
}