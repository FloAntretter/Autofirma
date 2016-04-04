#pragma once

#ifndef MOTOCROSS_H
#define MOTOCROSS_H
#endif // !MOTOCROSS_H


#include <string>
#include <Windows.h>
#include <iostream>
#include "motorrad.h"

using std::string;

class motocross : public motorrad
{
private:
	string reifen;
	void setReifen(string);

public:
	motocross(string _reifen)
	{
		setReifen(_reifen);
	}

	motocross()
	{}

	string getReifen();
};