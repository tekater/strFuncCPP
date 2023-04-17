#pragma warning(disable:4996) // Очень важно - без этого strcat не работает.

#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>

using namespace std;


int main()
{
	setlocale(0, "");
	srand(time(NULL));
	//system("color B5");
	cout << "Задание 1\n";
	char tabuta[127] = "Привет,  тебе очень нужно заменить мои пробелы на табуляции", *p;
	cout << tabuta << endl;
	for (p = tabuta; *p; p++)
	{
		if (*p == ' ') {
			*p = '\t';
		}
	}
	cout << tabuta;

	cout << "\n\nЗадание 2\n";
	char serc[127] = "Abc 123 ***";
	int num = 0; int sym = 0; int bukv = 0; int space = 0;

	for (int i = 0; i < strlen(serc); i++) {
		if (isalpha(serc[i])) {
			bukv++;
		}else if (isdigit(serc[i])) {
			num++;
		}
		else if (isspace(serc[i])) {
			space++;
		}
		else {
			sym++;
		}
	}
	cout << serc << endl;
	cout << "Букв: " << bukv << "\nЦифр: " << num << "\nСимволов: " << sym << "\nПробелов: " << space;


	cout << "\n\nЗадание 3\n";

	char words[127] = "One two three.";
	
}
