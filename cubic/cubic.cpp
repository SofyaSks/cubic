#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int scorepl = 0, scorecp = 0;

bool yn() {
	return rand() % 2;
}

int roll(bool comp = false) {
	int points = rand() % 6 + 1;
	if (points == 6) {
		if (!comp) {
			scorepl += points;
			cout << "Хотите перебросить кубик? -> ";
			bool choice;
			cin >> choice;
			if (choice) {
				points = rand() % 6 + 1;
				if (points % 2) {
					scorepl += points;
					cout << "Вам выпало " << points << ".\n";
					cout << "Игрок: " << scorepl << ".\n";
				}
				else {
					scorepl -= points;
					cout << "Вам выпало " << points << ".\n";
					cout << "Игрок: " << scorepl << ".\n";
				}
			}

		}
		else {
			scorecp += points;
			if (yn) {

			}



int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	cout << "Давай сыграем в кубики!\n";
	if (yn()) {
		cout << "Начинает игрок.\nИгрок бросает кубик -> ";
		roll();
	}
	else
		cout << "Начинает компьютер. Компьютер бросает кубик -> ";
	do {
		if (scorepl < 50)
			roll(true);
		if (scorecp < 50)
			roll();
	} while (scorepl < 50 && scorecp < 50);
	if (scorepl >= 50)
		cout << "Вы победили!\n";
	else 
		cout << "Победил компьютер!\n";

	return 0;
}