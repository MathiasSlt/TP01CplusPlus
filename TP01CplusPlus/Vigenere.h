#pragma once
#include "Encrypt.h"
class Vigenere : public Encrypt
{
public:
	Vigenere();
	string getKeyCipher() const;
private:
	string _keyCipher;
	
};

