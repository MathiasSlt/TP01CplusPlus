#include "Encrypt.h"
#include <fstream>

Encrypt::Encrypt()
{


}

string Encrypt::getPlain() const
{
	return _plain;
}

string Encrypt::getCipher() const
{
	return _cipher;
}

bool Encrypt::read(bool isPlain, std::string filename)
{
	bool fileError = true;
	ifstream file(filename);
	if (file)
	{
		fileError = false;
		if (isPlain)
		{
			while (getline(file, _plain)) getline(file, _plain);
		}
		else {
			file >> _cipher;
		}
		file.close();
	}
	return fileError;
}

bool Encrypt::write(bool isPlain, std::string filename)
{
	bool fileError = true;
	ofstream file(filename, ios::out);
	if (file)
	{
		fileError = false;
		if (isPlain)
		{
			file << _plain;
		}
		else {
			file << _cipher;
		}
		file.close();
	}
	return fileError;
}

string Encrypt::encode()
{
	_cipher = _plain;
	return _cipher;
}

string Encrypt::decode()
{
	_plain = _cipher;
	return _plain;
}
