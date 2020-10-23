#include <iostream>
#include "BoekHeader.h"

Boek::Boek() {
	std::cout << "Boek geschreven.'" << titel << "' adres " << this << std::endl;
}
Boek::Boek(std::string titel) {
	std::cout << "Boek door het kopieer aperaat heen gerast.'" << titel << "' adres " << this << std::endl;
	this->titel == titel;
}
Boek& Boek::operator=(const Boek& anderBoek) {
	std::cout << "Boek: assignment-oper" << std::endl;
	std::cout << anderBoek.titel << std::endl;
	this->titel = anderBoek.titel;
	return *this;
}
Boek::~Boek() {
	std::cout << "Boek fikt af.'" << titel << "' adres " << this << std::endl;
}