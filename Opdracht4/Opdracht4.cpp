#include <iostream>
#include "Coins.h"
#include <string>

using namespace std;

void koffieApperaat()
{
	string coinString;

	cin >> coinString;
	if (coinString == "fiftyCents")
	{
		FiftyCents fc = FiftyCents();
		fc.coffee();
	}
	else if (coinString == "euro")
	{
		Euro e = Euro();
		e.coffee();
	}
	else if (coinString == "fiftyCents + euro")
	{
		EuroFifty ef = EuroFifty();
		ef.coffee();
	}
	else if (coinString == "coffeeCoin")
	{
		CoffeeCoin cc = CoffeeCoin();
		cc.coffee();
	}
}

int main()
{
	cout << "Instert a coin," << std::endl;
	cout << "'fiftyCents' will get you a small cup," << std::endl;
	cout << "'euro' will get you a middle cup," << std::endl;
	cout << "'fiftyCents + euro' will get you a big cup," << std::endl;
	cout << "'coffeeCoin' will get you all three cups!" << std::endl;

	koffieApperaat();
}