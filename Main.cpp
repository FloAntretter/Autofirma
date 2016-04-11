#include "fahrzeug.h"
#include "familienauto.h"
#include "lkw.h"
#include "moped.h"
#include "motocross.h"
#include "motorrad.h"
#include "pkw.h"
#include "spezialfahrzeug.h"
#include "sportwagen.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	Fahrzeug f(116, 1560, "Ford", "C-MAX Titanium", 2050, 0, 0);

	PKW p(105, 532, "VW", "Touran", 900, 200, 125, 5, 2013, 0);
	Sportwagen sport(30, true);
	Familienauto familie(true);

	LKW l(220, 3000, "MAN", "Truck & Bus Vertrieb", 2000, 560, 230, "Muldenkipper");

	Spezialfahrzeug s(24, 100, "Foton", "FT 254",	1000, 0, 0, "Traktor", false);

	Motorrad motorrad(95, 120, "Kawasaki", "R 600", 221, 1, 0.5, 1993);
	Motocross moto("Tolle Reifen");
	Moped moped(1);

	cout << "Fahrzeuge:\n\n";
	cout << f.getMarke() << " " << f.getModell() << ":\n";
	cout << "PS: " << f.getLeistung() << "\n";
	cout << "Hubraum [ccm]: " << f.getHubraum() << "\n";
	cout << "Gewicht [kg]: " << f.getGewicht() << "\n\n\n";
	cout << "PKWs:\n\n";
	cout << p.getMarke() << " " << p.getModell() << ":\n";
	cout << "PS: " << p.getLeistung() << "\n";
	cout << "Hubraum [ccm]: " << p.getHubraum() << "\n";
	cout << "Gewicht [kg]: " << p.getGewicht() << "\n";
	cout << "Sitzplaetze: " << p.getSitzplaetze() << "\n";
	cout << "Baujahr: " << p.getBaujahr() << "\n\n\n";
	// Weitere Textausgabe
	system("pause");
}