#pragma once
#include <string>
using namespace std;
class Encrypt {

public:

	Encrypt();

	string getPlain() const;

	string getCipher() const;

	bool read(bool isPlain, std::string filename);

	bool write(bool isPlain, std::string filename);

	string encode();

	string decode();

protected:

	string _plain;

	string _cipher;

};