// TP01CplusPlus.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Encrypt.h"
#include "CaesarV2.h"

int main()
{
	string file="C:/Users/Mathias/Source/Repos/MathiasSlt/TP01CplusPlus/test.txt";
	string file2 = "C:/Users/Mathias/Source/Repos/MathiasSlt/TP01CplusPlus/test2.txt";
	CaesarV2 enc1;
	enc1.read(true, file);
	cout << "le mot est :" << enc1.getPlain() << endl;
	cout<<enc1.encode(3)<<endl;
	enc1.write(false, file2);
	cout << enc1.decode(3) << endl;
}

