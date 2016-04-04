#include "Fahrzeug.h"
#include <cstring>
#include <iostream>

using namespace std;
using std::string;

void Fahrzeug::setLeistung(int _leistung)
{
	leistung = _leistung;
}

void Fahrzeug::setHubraum(int _hubraum)
{
	hubraum = _hubraum;
}

void Fahrzeug::setMarke(string _marke)
{
	marke = _marke;
}

void Fahrzeug::setModell(string _modell)
{
	modell = _modell;
}

void Fahrzeug::setGewicht(short _gewicht)
{
	gewicht = _gewicht;
}

void Fahrzeug::setLaenge(short _laenge)
{
	laenge = _laenge;
}

void Fahrzeug::setBreite(short _breite)
{
	breite = _breite;
}

int Fahrzeug::getLeistung()
{
	return leistung;
}

int Fahrzeug::getHubraum()
{
	return hubraum;
}

string Fahrzeug::getMarke()
{
	return marke;
}

string Fahrzeug::getModell()
{
	return modell;
}

short Fahrzeug::getGewicht()
{
	return gewicht;
}

short Fahrzeug::getLaenge()
{
	return laenge;
}

short Fahrzeug::getBreite()
{
	return breite;
}
