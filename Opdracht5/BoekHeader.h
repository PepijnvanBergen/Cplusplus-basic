#pragma once

class Boek {
public:
	Boek();
	Boek(std::string titel);
	Boek(const Boek& bibliotheek);
	virtual ~Boek();
	Boek& operator=(const Boek& anderBoek);

	std::string titel;
};