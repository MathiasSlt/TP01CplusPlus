#include "Caesar.h"

Caesar::Caesar()
{

}

std::string Caesar::decode()
{
	string motCoder = this->getCipher();
	string motDecoder="";
	for (int i = 0; i < motCoder.length(); i++)
	{
		char car = motCoder[i];
		if (car <= 'z' && car >= 'a')
		{
			car -= 3;
			if (car > 'z')
			{
				car = car + 'z' - 'a' + 1;
			}
			motDecoder += car;
		}
		else if (car <= 'Z' && car >= 'A')
		{
			car -= 3;
			if (car > 'Z')
			{
				car = car + 'Z' - 'A' + 1;
			}
			motDecoder += car;
		}
		else motDecoder += car;

	}
	this->_cipher = motDecoder;
	return motDecoder;
}

std::string Caesar::encode()
{
	string motDecoder = this->getPlain();
	string motCoder="";
	for (int i = 0; i < motDecoder.length(); i++)
	{
		char car = motDecoder[i];
		if (car <= 'z' && car >= 'a')
		{
			car += 3;
			if (car > 'z')
			{
				car = car - 'z' + 'a' - 1;
			}
			motCoder+= car;
		}
		else if (car <= 'Z' && car >= 'A')
		{
			car += 3;
			if (car > 'Z')
			{
				car = car - 'Z' + 'A' - 1;
			}
			motCoder+= car;
		}
		else motCoder += car;

	}
	this->_cipher = motCoder;
	return motCoder;
}