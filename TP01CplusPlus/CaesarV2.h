#pragma once
#include "Encrypt.h"
#include <cstring>
#include <algorithm>  
class CaesarV2 : public Encrypt
{
public:
	CaesarV2();
	std::string encode(int key);
	std::string decode(int key);

};



