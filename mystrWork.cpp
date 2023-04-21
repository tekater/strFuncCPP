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
	char* p1 = str1 + mystrlen(str1);
	while (*str2 != '\0') {
		*p1++ = *str2++;
	}
	*p1 = '\0';
	return str1;
}

char* mystrchr(char* str, char s) {
	if (mystrlen(str) > 0) {
		for (int i = 0; i < mystrlen(str); i++) {
			if (str[i] == s) {
				//str[i + 1] = '\0';
				return &str[i];
			}
			else if (*str == '\0') {
				return nullptr;
			}
		}
	}
	return &str[mystrlen(str)];
}

char* mystrstr(char* str1, char* str2) {
	int count = 0;
	if (mystrlen(str1) > 0) {
		for (int i = 0; i < mystrlen(str1); i++) {
			if (str1[i] == str2[0]) {
				for (int j = 0; j < mystrlen(str2); j++) {
					if (str1[i + j] == str2[j]) {
						count++;
					}
					if (count == mystrlen(str2)) {
						return &str1[i];
					}
				}

			}else if (*str1 == '\0') {
				return nullptr;
			}

		}
	}
	return &str1[mystrlen(str1)];
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
	cout << mystrcpy(word2, copy) << endl << endl;

	char oneW[length] = "Предложение доп";
	const char twoW[length] = "олнено успешно.";
	cout << mystrcat(oneW, twoW) << endl << endl;

	char book[length] = "В этой книге есть 5 глав.";
	cout << "Предложение: " << book << endl << "Символ(указан вручную): 5" << endl;
	cout << "strchr: " << mystrchr(book, 53) << endl << endl;
	//cout << mystrchr(book, 53) << endl << endl;

	char first[length] = "Есть у меня одна идея";
	char second[length] = "одна";
	cout << "Предложение: " << first << endl << "Слово: " << second << endl;
	cout << "STRSTR: " << mystrstr(first, second) << endl;
}
