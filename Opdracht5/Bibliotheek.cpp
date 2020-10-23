#include <iostream>
#include "BibliotheekHeader.h"

Bibliotheek::Bibliotheek() {
	std::cout << "Bibliotheek is gebouwt." << std::endl;
}
Bibliotheek::~Bibliotheek() {
	std::cout << "Bibliotheek fikt af." << std::endl;
}
Bibliotheek::Bibliotheek(const Bibliotheek& anderBibliotheek) {
	std::cout << "Nog een bibliotheek bouwen." << std::endl;
	if (this == &anderBibliotheek) return;
	boek = Boek(anderBibliotheek.boek.titel);
}
Bibliotheek& Bibliotheek::operator=(const Bibliotheek& anderBibliotheek) {
	std::cout << "Blauwe plannetjes van de bieb klaar gelegt." << std::endl;
	std::cout << "" << std::endl;
	if (this == &anderBibliotheek) return *this;
	boek = Boek(anderBibliotheek.boek.titel);
	return *this;
}

void Bibliotheek::verzamelBoek(std::string titel) {
	boek = Boek(titel);
}
void Bibliotheek::leverBoekUit(std::string titel) {
	boek.~Boek();
}
void Bibliotheek::neemBoekIn(std::string titel) {
	boek = Boek(titel);
}
void Bibliotheek::toonKast() {
	std::cout << "Bibliotheek bevat: '" << boek.titel << "'" << std::endl;
}