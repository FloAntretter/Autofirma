#pragma once

#ifndef FAMILIENAUTO_H
#define FAMILIENAUTO_H

#include "pkw.h"

class Familienauto : public PKW
{
private:
	bool navi;
	void setNavi(bool);

public:
	Familienauto(bool _navi)
	{
		setNavi(_navi);
	}

	Familienauto() {}

	bool getNavi();
};

#endif