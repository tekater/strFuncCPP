#pragma warning(disable:4996) // Очень важно - без этого strcat не работает.

#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>

using namespace std;
const int length = 120;

int mystrlen(const char* str) {
	int count = 0;
	for (int i = 0; i < length; i++) {
		if (*str++) {
			count++;
		}
	}
	return count;
}

char* mystrcpy(char* str1, const char* str2) {
	char* p1 = str1; const char* p2 = str2;
	do {
		*p1++ = *p2;
	} while (*p2++);
	return str1;
}

char* mystrcat(char* str1, const char* str2) {
	char* p1 = str1; const char* p2 = str2;
	//for (int i = 0; i < length; i++) {
	//	if (*p1++) {}
	//}
	//*p1++ = *p2;
	return str1;
}

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	//system("color B5");
	
	
	const char word[length] = "1234567890";

	cout << "Word: " << word << endl << "Word length: ";
	cout << mystrlen(word);
	cout << endl;

	char word2[length] = "Кто скопировал тот dead.";
	const char copy[length] = "Скопировал и не dead.";

	cout << "\nWord: " << copy << "\nWord2: " << word2 << endl << "Copy: ";
	cout << mystrcpy(word2, copy) << endl;
	cout << mystrcat(word2, copy) << endl; // чёт не понятно короче
}
