#pragma once

#ifndef MOPED_H
#define MOPED_H
#endif // !MOPED_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include "motorrad.h"

using std::string;

class moped : public motorrad
{
private:
	int stauraum;

	void setStauraum(int);

public:
	moped(int _stauraum)
	{
		setStauraum(_stauraum);
	}

	moped()
	{}

	int getStauraum();
}