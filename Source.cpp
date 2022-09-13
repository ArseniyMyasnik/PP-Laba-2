#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int number;
	cout << "¬ведите число от 1 до 999999: ";
	cin >> number;
	while ((number <= 0) || (number > 999999)) {
		cout << "¬веденное число не в диапазоне 1-999999: ";
		cin >> number;
	}
		if (number / 100000 == 1) {
		cout << "—то ";
	}
	else if (number / 100000 == 2) {
		cout << "ƒвести ";
	}
	else if (number / 100000 == 3) {
		cout << "“риста ";
	}
	else if (number / 100000 == 4) {
		cout << "„етыреста ";
	}
	else if (number / 100000 == 5) {
		cout << "ѕ€тьсот ";
	}
	else if (number / 100000 == 6) {
		cout << "Ўестьсот ";
	}
	else if (number / 100000 == 7) {
		cout << "—емьсот ";
	}
	else if (number / 100000 == 8) {
		cout << "¬осемьсот ";
	}
	else if (number / 100000 == 9) {
		cout << "ƒев€тьсот ";
	}
		if ((number % 100000) / 1000 == 11) {
			cout << "одиннадцать тыс€ч ";
			}
		else if ((number % 100000) / 1000 == 12) {
			cout << "двенадцать тыс€ч ";
			}
		else if ((number % 100000) / 1000 == 13) {
			cout << "тринадцать тыс€ч ";
			}
		else if ((number % 100000) / 1000 == 14) {
			cout << "четырнадцать тыс€ч ";
			}
		else if ((number % 100000) / 1000 == 15) {
			cout << "п€тнадцать тыс€ч ";
			}
		else if ((number % 100000) / 1000 == 16) {
			cout << "шестнадцать тыс€ч ";
		}
		else if ((number % 100000) / 1000 == 17) {
			cout << "семнадцать тыс€ч ";
			}
		else if ((number % 100000) / 1000 == 18) {
			cout << "восемнадцать тыс€ч ";
			}
		else if ((number % 100000) / 1000 == 19) {
			cout << "дев€тнадцать тыс€ч ";
			}
		if ((number % 100000) / 1000 == 10) {
			cout << "дес€ть ";
		}
		else if ((number % 100000) / 10000 == 2) {
			cout << "двадцать ";
		}
		else if ((number % 100000) / 10000 == 2) {
			cout << "двадцать ";
		}
		else if ((number % 100000) / 10000 == 3) {
			cout << "тридцать ";
		}
		else if ((number % 100000) / 10000 == 4) {
			cout << "сорок ";
		}
		else if ((number % 100000) / 10000 == 5) {
			cout << "п€тьдес€т ";
		}
		else if ((number % 100000) / 10000 == 6) {
			cout << "шестьдес€т ";
		}
		else if ((number % 100000) / 10000 == 7) {
			cout << "семьдес€т ";
		}
		else if ((number % 100000) / 10000 == 8) {
			cout << "восемьдес€т ";
		}
		else if ((number % 100000) / 10000 == 9) {
			cout << "дев€носто ";
		}
		if ((number % 10000) / 1000 == 0 && (number>999)) {
			cout << "тыс€ч ";
		}
		else if ((number % 10000) / 1000 == 1 && (number % 100000) / 1000 != 11) {
			cout << "одна тыс€ча ";
		}
		else if ((number % 10000) / 1000 == 2 && (number % 100000) / 1000 != 12) {
			cout << "две тыс€чи ";
		}
		else if ((number % 10000) / 1000 == 3 && (number % 100000) / 1000 != 13) {
			cout << "три тыс€чи ";
		}
		else if ((number % 10000) / 1000 == 4 && (number % 100000) / 1000 != 14) {
			cout << "четыре тыс€чи ";
		}
		else if ((number % 10000) / 1000 == 5 && (number % 100000) / 1000 != 15) {
			cout << "п€ть тыс€ч ";
		}
		else if ((number % 10000) / 1000 == 6 && (number % 100000) / 1000 != 16) {
			cout << "шесть тыс€ч ";
		}
		else if ((number % 10000) / 1000 == 7 && (number % 100000) / 1000 != 17) {
			cout << "семь тыс€ч ";
		}
		else if ((number % 10000) / 1000 == 8 && (number % 100000) / 1000 != 18) {
			cout << "восемь тыс€ч ";
		}
		else if ((number % 10000) / 1000 == 9 && (number % 100000) / 1000 != 19) {
			cout << "дев€ть тыс€ч ";
		}
		if ((number % 1000) / 100 == 1) {
			cout << "сто ";
		}
		else if ((number % 1000) / 100 == 2) {
			cout << "двести ";
		}
		else if ((number % 1000) / 100 == 3) {
			cout << "триста ";
		}
		else if ((number % 1000) / 100 == 4) {
			cout << "четыреста ";
		}
		else if ((number % 1000) / 100 == 5) {
			cout << "п€тьсот ";
		}
		else if ((number % 1000) / 100 == 6) {
			cout << "шестьсот ";
		}
		else if ((number % 1000) / 100 == 7) {
			cout << "семьсот ";
		}
		else if ((number % 1000) / 100 == 8) {
			cout << "восемьсот ";
		}
		else if ((number % 1000) / 100 == 9) {
			cout << "дев€тьсот ";
		}
		if ((number % 100) == 11) {
			cout << "одиннадцать ";
		}
		else if ((number % 100) == 12) {
			cout << "двенадцать ";
		}
		else if ((number % 100) == 13) {
			cout << "тринадцать ";
		}
		else if ((number % 100) == 14) {
			cout << "четырнадцать ";
		}
		else if ((number % 100) == 15) {
			cout << "п€тнадцать ";
		}
		else if ((number % 100) == 16) {
			cout << "шестнадцать ";
		}
		else if ((number % 100) == 17) {
			cout << "семнадцать ";
		}
		else if ((number % 100) == 18) {
			cout << "восемнадцать ";
		}
		else if ((number % 100) == 19) {
			cout << "дев€тнадцать ";
		}
		if ((number % 100) / 10 == 10) {
			cout << "дес€ть ";
		}
		else if ((number % 100) / 10 == 2) {
			cout << "двадцать ";
		}
		else if ((number % 100) / 10 == 3) {
			cout << "тридцать ";
		}
		else if ((number % 100) / 10 == 4) {
			cout << "сорок ";
		}
		else if ((number % 100) / 10 == 5) {
			cout << "п€тьдес€т ";
		}
		else if ((number % 100) / 10 == 6) {
			cout << "шестьдес€т ";
		}
		else if ((number % 100) / 10 == 7) {
			cout << "семьдес€т ";
		}
		else if ((number % 100) / 10 == 8) {
			cout << "восемьдес€т ";
		}
		else if ((number % 100) / 10 == 9) {
			cout << "дев€носто ";
		}
		if (number % 10 == 1) {
			cout << "один рубль";
		}
		else if (number % 10 == 2) {
			cout << "два рубл€";
		}
		else if (number % 10 == 3) {
			cout << "три рубл€";
		}
		else if (number % 10 == 4) {
			cout << "четыре рубл€";
		}
		else if (number % 10 == 5) {
			cout << "п€ть рублей";
		}
		else if (number % 10 == 6) {
			cout << "шесть рублей";
		}
		else if (number % 10 == 7) {
			cout << "семь рублей";
		}
		else if (number % 10 == 8) {
			cout << "восемь рублей";
		}
		else if (number % 10 == 9) {
			cout << "дев€ть рублей";
		}
}
