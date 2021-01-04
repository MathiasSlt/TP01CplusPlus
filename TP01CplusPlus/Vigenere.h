#pragma once
#include "Encrypt.h"
#include <vector>
class Vigenere : public Encrypt
{
public:
	Vigenere(vector<int> tabKey);
	vector<int> getKeyCipher() const;
	string encode();
	string decode();
private:
	vector<int> _keyCipher;


};