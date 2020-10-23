#include <iostream>
#include "BoekHeader.h"
#include "BibliotheekHeader.h"

int main()
{
    Bibliotheek bieb;
    bieb.toonKast();

    bieb.verzamelBoek("Whitefang");
    bieb.toonKast();
    bieb.leverBoekUit("Whitefang");
    bieb.toonKast();
    bieb.neemBoekIn("Whitefang");
    bieb.toonKast();
    return 0;
}