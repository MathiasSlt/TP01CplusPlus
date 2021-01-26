#include "Enigma.h"

Enigma::Enigma(vector<char> key): _cypherKey(key)
{

}

string Enigma::encode()
{
	return string();
}

string Enigma::decode()
{
	return string();
}

const vector<char> Enigma::CypherKey()
{
	return _cypherKey;
}