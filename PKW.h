#pragma once

#include "fahrzeug.h"

#ifndef PKW_H
#define PKW_H

class PKW : public Fahrzeug
{
private:
	int sitzplaetze, baujahr, stauraum;

protected:
	void setSitzplaetze(int);
	void setBaujahr(int);
	void setStauraum(int);

public:
	PKW(int _leistung, int _hubraum,
		string _marke, string _modell,
		short _gewicht, short _laenge, short _breite,
		int _sitzplaetze, int _baujahr, int _stauraum)
	{
		setLeistung(_leistung);
		setHubraum(_hubraum);
		setMarke(_marke);
		setModell(_modell);
		setGewicht(_gewicht);
		setLaenge(_laenge);
		setBreite(_breite);
		setSitzplaetze(_sitzplaetze);
		setBaujahr(_baujahr);
		setStauraum(_stauraum);
	}

	PKW() {}

	int getSitzplaetze();
	int getBaujahr();
	int getStauraum();
};

#endif