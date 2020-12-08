#include "CaesarV2.h"

CaesarV2::CaesarV2()
{

}

std::string CaesarV2::decode(int key)
{
	string motCoder = this->getCipher();
	string motDecoder = "";
	for (int i = 0; i < motCoder.length(); i++)
	{
		char car = motCoder[i];
		if (car <= 'z' && car >= 'a')
		{
			car -= key;
			if (car > 'z')
			{
				car = car + 'z' - 'a' + 1;
			}
			motDecoder += car;
		}
		else if (car <= 'Z' && car >= 'A')
		{
			car -= key;
			if (car > 'Z')
			{
				car = car + 'Z' - 'A' + 1;
			}
			motDecoder += car;
		}
		else motDecoder += (car-key);

	}
	this->_cipher = motDecoder;
	return motDecoder;
}

std::string CaesarV2::encode(int key)
{
	string motDecoder = this->getPlain();
	string motCoder = "";
	for (int i = 0; i < motDecoder.length(); i++)
	{
		char car = motDecoder[i];
		if (car <= 'z' && car >= 'a')
		{
			car += key;
			if (car > 'z')
			{
				car = car - 'z' + 'a' - 1;
			}
			motCoder += car;
		}
		else if (car <= 'Z' && car >= 'A')
		{
			car += key;
			if (car > 'Z')
			{
				car = car - 'Z' + 'A' - 1;
			}
			motCoder += car;
		}
		else motCoder += (car+key);

	}
	this->_cipher = motCoder;
	return motCoder;
}
