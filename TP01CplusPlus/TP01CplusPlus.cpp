// TP01CplusPlus.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Encrypt.h"

int main()
{
	string file="C:/Users/Mathias/Source/Repos/MathiasSlt/TP01CplusPlus/test.txt";
	string file2 = "C:/Users/Mathias/Source/Repos/MathiasSlt/TP01CplusPlus/test2.txt";
	Encrypt enc1;
	enc1.read(true, file);
	cout << "le mot est :" << enc1.getPlain() << endl;
	enc1.write(true, file2);
}

