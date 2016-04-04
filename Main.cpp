#include "fahrzeug.h"
#include "familienauto.h"
#include "lkw.h"
#include "moped.h"
#include "motocross.h"
#include "motorrad.h"
#include "pkw.h"
#include "spezialfahrzeug.h"
#include "sportwagen.h"

int main()
{
	Fahrzeug f(116, 1560, "Ford", "C-MAX Titanium", 2050, 0, 0);

	PKW p(105, 1598, "Skoda", "Octavia Combi", 1855, 0, 0, 5, 2013, 0);
	Sportwagen sport;
	Familienauto familie;

	LKW l(1000, 2000, "Mercedes-Benz", "ACTRO S 4141 8x8 Euro5 Smitz Muldenkipper", 41000, 9200, 2550, "Muldenkipper");

	Spezialfahrzeug s(90, 0, "John Deere", "6300", 0, 0, 0, "Traktor", false);

	Motorrad motorrad(136, 998, "Honda", "CBR1000F-SC24", 264, 0, 0, 1993);
	Motocross moto;
	Moped moped;

	
}