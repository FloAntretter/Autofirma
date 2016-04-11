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

	LKW(string _benutzung)
	{
		setBenutzung(_benutzung);
	}

	LKW()
	{
	}

	string getBenutzung();
};
