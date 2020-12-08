#pragma once
#include "Encrypt.h"
#include <cstring>
#include <algorithm>  
class Caesar : public Encrypt
{
public:
	Caesar();
	std::string encode();
	std::string decode();

};

