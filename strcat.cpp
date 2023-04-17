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
	char str[127] = "ФИО: ";
	char one[127]; cout << "Введите имя:\n"; cin >> one; strcat(one, " ");
	char two[127]; cout << "Введите Фамилию:\n"; cin >> two; strcat(two, " ");
	char three[127]; cout << "Введите Отчество:\n"; cin >> three; strcat(three, " ");
	strcat(strcat(strcat(str, one),two),three);
	cout << str << endl;
}
