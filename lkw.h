
#pragma once

#include <iostream>
#include <string>

#ifndef  LKW_H
#define  LKW_H
#endif // ! LKW_H

using std::string;

class LKW : public Fahrzeug
{
private:

	string marke, modell, benutzung;

	void setMarke(string);
	void setModell(string);
	void setBenutzung(string);

public:

	LKW(string _marke, string _modell, string _benutzung)
	{
		setMarke(_marke);
		setModell(_modell);
		setBenutzung(_benutzung);
	}

	LKW()
	{

	}

	string getMarke();
	string getModell();
	string getBenutzung();
};
