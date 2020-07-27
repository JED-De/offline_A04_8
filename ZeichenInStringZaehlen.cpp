#include <iostream>
#include <string>
using namespace std;

int main()
{
	string eingabe;
	char vergleich;
	unsigned int anz = 0;
	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, eingabe);
	cout << "Bitte Buchstaben eingeben: ? ";
	cin >> vergleich;
	for (int i = 0; i < eingabe.size(); i++)
	{
		if (eingabe.at(i) == vergleich)
		{
			anz++;
		}
	}
		cout << "Der Buchstabe " << vergleich << " kommt " << anz << " mal im Text vor." << endl;
	system("PAUSE");
	return 0;
}