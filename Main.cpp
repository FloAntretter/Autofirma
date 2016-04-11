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

	PKW p(5, 2013, 0);
	Sportwagen sport;
	Familienauto familie;

	LKW l("Muldenkipper");

	Spezialfahrzeug s("Traktor", false);

	Motorrad motorrad(1993);
	Motocross moto;
	Moped moped;
}