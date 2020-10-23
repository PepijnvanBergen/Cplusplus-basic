#pragma once
#include <string>
#include "BoekHeader.h"

class Bibliotheek {
	public:
		Bibliotheek();
		Bibliotheek(const Bibliotheek& anderBibliotheek);
		Bibliotheek& operator=(const Bibliotheek& anderBibliotheek);
		virtual ~Bibliotheek();
		void verzamelBoek(std::string titel);
		void toonKast();
		void leverBoekUit(std::string titel);
		void neemBoekIn(std::string titel);

	private:
		Boek boek;
};