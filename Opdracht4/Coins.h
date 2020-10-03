#pragma once
using namespace std;
#include <iostream>
#include "Coin.h"



class FiftyCents : public Coin
{
public:
	void coffee() {
		cout << "A small 'the best coffee' coffee." << std::endl;
	}
};

class Euro : public Coin
{
public:
	void coffee() {
		cout << "A medium 'the best coffee' coffee." << std::endl;
	}
};

class EuroFifty : public Coin
{
public:
	void coffee() {
		cout << "A BIG 'the best coffee' coffee." << std::endl;
	}
};

class CoffeeCoin : public Coin
{
public:
	void coffee() {
		cout << "A BIG 'The best coffee' coffee." << std::endl;
	}
};