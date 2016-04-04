#pragma once

#ifndef FAHRZEUG_H
#define FAHRZEUG_H

#include <iostream>
#include <cstring>

using std::string;

class Fahrzeug
{
private:
	int leistung, hubraum;
	string marke, modell;
	short gewicht, laenge, breite;
	void setLeistung(int);
	void setHubraum(int);
	void setMarke(string);
	void setModell(string);
	void setGewicht(short);
	void setLaenge(short);
	void setBreite(short);

public:
	Fahrzeug(
		int _leistung, int _hubraum,
		string _marke, string _modell,
		short _gewicht, short _laenge, short _breite
		) 
	{
		setLeistung(_leistung);
		setHubraum(_hubraum);
		setMarke(_marke);
		setModell(_modell);
		setGewicht(_gewicht);
		setLaenge(_laenge);
		setBreite(_breite);
	}

	Fahrzeug() {}

	int getLeistung();
	int getHubraum();
	string getMarke();
	string getModell();
	short getGewicht();
	short getLaenge();
	short getBreite();
};

#endif 