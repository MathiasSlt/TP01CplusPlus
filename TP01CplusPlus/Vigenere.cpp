#include "Vigenere.h"

Vigenere::Vigenere(vector<int> tabKey) :_keyCipher(tabKey)
{

}

vector<int> Vigenere::getKeyCipher() const
{
	return _keyCipher;
}

string Vigenere::encode()
{
	string plain = getPlain();
	string messageCode = "";
	vector<int> key = getKeyCipher();
	int c(0);
	for (int i = 0; i < plain.length(); i++)
	{

		messageCode.push_back(plain[i] + key[c]);
		c++;
		if (c == getKeyCipher().size())
		{
			c = 0;
		}
	}
	this->_cipher = messageCode;
	return messageCode;
}

string Vigenere::decode()
{
	string cipher = getCipher();
	string messageDecode = "";
	vector<int> key = getKeyCipher();
	int c(0);
	for (int i = 0; i < cipher.length(); i++)
	{
		messageDecode.push_back(cipher[i] - key[c]);
		c++;
		if (c == getKeyCipher().size())
		{
			c = 0;
		}
	}
	this->_plain = messageDecode;
	return messageDecode;
}