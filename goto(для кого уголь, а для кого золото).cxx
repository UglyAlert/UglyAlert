#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Russian");
	cout << "Эта программа показывает, что goto предвзято считают плохим словом." 
	<< endl << endl << endl 
	<< "Ввод букв, пока не будет нажата s(stop)" 
	<< endl;
	char simbol = ' ';
	exit1:;
	simbol = getch();
	cout << "simbol = " << simbol << endl;
	if (simbol != 's')
		goto exit1;
	cout << "Не относитесь плохо к goto.)";
	return 0;
}