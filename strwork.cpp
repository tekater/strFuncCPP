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
	char tabuta[127] = "Привет,  тебе очень нужно заменить мои пробелы на табуляции", * p;
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
		}
		else if (isdigit(serc[i])) {
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
	int word = 0;
	char words[127] = "One two three. ";
	if (isalpha(words[0])) {
		word++;
	}

	for (int i = 0; i < strlen(words); i++) {
		if (isspace(words[i]) && isalpha(words[i + 1])) {
			word++;
		}
	}
	cout << "Слов: " << word << endl;


	cout << "\n\nЗадание 4\n";

	char palik[127] = "Аргентина манит негра"; // лепс спел, искат такси, Арг   ент ин а мани т не гра
	char pal[127] = " ";

	cout << palik << endl;

	int palcounter = 0;
	for (int z = 0; z < strlen(palik); z++) {
		for (int i = 0; i < strlen(palik); i++) {
			if (isspace(palik[i])) {
				palik[i] = palik[i + 1];
				for (int j = i; j < strlen(palik - i); j++) {
					palik[j] = palik[j + 1];
				}
			}
		}
	}

	for (int i = 0; i < strlen(palik); i++) {
		pal[i] = palik[i];
	}

	int j = strlen(pal) - 1;
	
	strlwr(pal);

	for (int i = 0; i < strlen(pal); i++,j--) {
		
		if (pal[i] == pal[j]) {
			palcounter++;
		}
	}
	if (palcounter == strlen(pal)) {
		cout << "Предложение Является палиндромом.";
	}
	else {
		cout << "Предложение не Является палиндромом.";
	}
	cout << endl;
}
