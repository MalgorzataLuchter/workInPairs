#include "max.h"
#include "min.h"

int main()
{

const int n = 10; 
float tab[n];
float suma = 0; 
float min, max; 
int ujemne = 0, dodatnie = 0, zerowe = 0;

cout << "Wprowadz elementy tablicy " << n << "-elementowej:" << endl;
for (int i = 0; i < n; i++)
{
cout << "tab[" << i << "] = ";
cin >> tab[i];
}

min = tab[0];
max = tab[0];
for (int i = 0; i < n; i++)
{
suma += tab[i];

if (tab[i] < min)
{
min = tab[i];
}

if (tab[i] > max)
{
max = tab[i];
}

if (tab[i] > 0)
{
dodatnie++;
}

if (tab[i] < 0)
{
ujemne++;
}

if (tab[i] == 0)
{
zerowe++;
}
}
returno0;
}

cout << endl << "Suma elementow tablicy wynosi: " << suma << endl;
cout << "Srednia elementow tablicy wynosi: " << (suma / n) << endl;
cout << endl << "Najmniejszy element tablicy to: " << min << endl;
cout << "Najwiekszy element tablicy to: " << max << endl;
cout << endl << "W tablicy jest " << dodatnie << " elementow dodatnich." << endl;
cout << "W tablicy jest " << ujemne << " elementow ujemnych." << endl;
cout << "W tablicy jest " << zerowe << " elementow zerowych." << endl;

char znak;
cin >> znak;
}