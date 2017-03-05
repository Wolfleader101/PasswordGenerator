#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <Windows.h>
/*
TODO:
*add settings
*add more chars
*add customization in password
*saves password
*google chrome plugin then firefox
*custom colours
*/
using namespace std;

static const char characters[] = 
"qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890`~!@#$%^&*()_+{}|\;:,<.>/?"; //characters that are used for passcode **ADD MORE LATER**

int StringLength = sizeof(characters) - 1;

char GenRand() {
	return characters[rand() % StringLength];
}

int main(){
	
	srand(time(0));

	int length = 0;

	cout << "Enter the number of digits for your password" << endl;
	cin >> length;



	std::string Str;
	for (unsigned int i = 0; i < length; ++i)
	{
		Str += GenRand();
	}
	cout << "Password Made!" << endl;
	cout << Str << endl;

	cout << endl;
	system("PAUSE");
	return 0;
}