#pragma once
#include "Encrypt.h"
#include <vector>
class Enigma :
	public Encrypt
{
public : 
	Enigma(vector<char> key);
	string encode();
	string decode();
	const vector<char> CypherKey();


private : 
	vector<char> _cypherKey;

};

