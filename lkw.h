#pragma once

#include <iostream>
#include <string>
#include "fahrzeug.h"

#ifndef  LKW_H
#define  LKW_H
#endif // ! LKW_H

using std::string;

class LKW : Fahrzeug
{
private:

	string benutzung;

	void setBenutzung(string);

public:

	LKW(int _leistung, int _hubraum,
		string _marke, string _modell,
		short _gewicht, short _laenge, short _breite,
		string _benutzung)
	{
		setLeistung(_leistung);
		setHubraum(_hubraum);
		setMarke(_marke);
		setModell(_modell);
		setGewicht(_gewicht);
		setLaenge(_laenge);
		setBreite(_breite);
		setBenutzung(_benutzung);
	}

	LKW()
	{
	}

	string getBenutzung();
};
