#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int number;
	cout << "Vvedite chislo ot 1 do 999999: ";
	cin >> number;
	while ((number <= 0) || (number > 999999)) {
		cout << "Vvedennoe chislo ne v diapazone 1-999999: ";
		cin >> number;
	}
		if (number / 100000 == 1) {
		cout << "Sto ";
	}
	else if (number / 100000 == 2) {
		cout << "Dvesti ";
	}
	else if (number / 100000 == 3) {
		cout << "Trista ";
	}
	else if (number / 100000 == 4) {
		cout << "CHetyresta ";
	}
	else if (number / 100000 == 5) {
		cout << "Pyat'sot ";
	}
	else if (number / 100000 == 6) {
		cout << "SHest'sot ";
	}
	else if (number / 100000 == 7) {
		cout << "Sem'sot ";
	}
	else if (number / 100000 == 8) {
		cout << "Vosem'sot ";
	}
	else if (number / 100000 == 9) {
		cout << "Devyat'sot ";
	}
		if ((number % 100000) / 1000 == 11) {
			cout << "odinnadcat' tysyach ";
			}
		else if ((number % 100000) / 1000 == 12) {
			cout << "dvenadcat' tysyach ";
			}
		else if ((number % 100000) / 1000 == 13) {
			cout << "trinadcat' tysyach ";
			}
		else if ((number % 100000) / 1000 == 14) {
			cout << "chetyrnadcat' tysyach ";
			}
		else if ((number % 100000) / 1000 == 15) {
			cout << "pyatnadcat' tysyach ";
			}
		else if ((number % 100000) / 1000 == 16) {
			cout << "shestnadcat' tysyach ";
		}
		else if ((number % 100000) / 1000 == 17) {
			cout << "semnadcat' tysyach ";
			}
		else if ((number % 100000) / 1000 == 18) {
			cout << "vosemnadcat' tysyach ";
			}
		else if ((number % 100000) / 1000 == 19) {
			cout << "devyatnadcat' tysyach ";
			}
		if ((number % 100000) / 1000 == 10) {
			cout << "desyat' ";
		}
		else if ((number % 100000) / 10000 == 2) {
			cout << "dvadcat' ";
		}
		else if ((number % 100000) / 10000 == 2) {
			cout << "dvadcat' ";
		}
		else if ((number % 100000) / 10000 == 3) {
			cout << "tridcat' ";
		}
		else if ((number % 100000) / 10000 == 4) {
			cout << "sorok ";
		}
		else if ((number % 100000) / 10000 == 5) {
			cout << "pyat'desyat ";
		}
		else if ((number % 100000) / 10000 == 6) {
			cout << "shest'desyat ";
		}
		else if ((number % 100000) / 10000 == 7) {
			cout << "sem'desyat ";
		}
		else if ((number % 100000) / 10000 == 8) {
			cout << "vosem'desyat ";
		}
		else if ((number % 100000) / 10000 == 9) {
			cout << "devyanosto ";
		}
		if ((number % 10000) / 1000 == 0 && (number>999)) {
			cout << "tysyach ";
		}
		else if ((number % 10000) / 1000 == 1 && (number % 100000) / 1000 != 11) {
			cout << "odna tysyacha ";
		}
		else if ((number % 10000) / 1000 == 2 && (number % 100000) / 1000 != 12) {
			cout << "dve tysyachi ";
		}
		else if ((number % 10000) / 1000 == 3 && (number % 100000) / 1000 != 13) {
			cout << "tri tysyachi ";
		}
		else if ((number % 10000) / 1000 == 4 && (number % 100000) / 1000 != 14) {
			cout << "chetyre tysyachi ";
		}
		else if ((number % 10000) / 1000 == 5 && (number % 100000) / 1000 != 15) {
			cout << "pyat' tysyach ";
		}
		else if ((number % 10000) / 1000 == 6 && (number % 100000) / 1000 != 16) {
			cout << "shest' tysyach ";
		}
		else if ((number % 10000) / 1000 == 7 && (number % 100000) / 1000 != 17) {
			cout << "sem' tysyach ";
		}
		else if ((number % 10000) / 1000 == 8 && (number % 100000) / 1000 != 18) {
			cout << "vosem' tysyach ";
		}
		else if ((number % 10000) / 1000 == 9 && (number % 100000) / 1000 != 19) {
			cout << "devyat' tysyach ";
		}
		if ((number % 1000) / 100 == 1) {
			cout << "sto ";
		}
		else if ((number % 1000) / 100 == 2) {
			cout << "dvesti ";
		}
		else if ((number % 1000) / 100 == 3) {
			cout << "trista ";
		}
		else if ((number % 1000) / 100 == 4) {
			cout << "chetyresta ";
		}
		else if ((number % 1000) / 100 == 5) {
			cout << "pyat'sot ";
		}
		else if ((number % 1000) / 100 == 6) {
			cout << "shest'sot ";
		}
		else if ((number % 1000) / 100 == 7) {
			cout << "sem'sot ";
		}
		else if ((number % 1000) / 100 == 8) {
			cout << "vosem'sot ";
		}
		else if ((number % 1000) / 100 == 9) {
			cout << "devyat'sot ";
		}
		if ((number % 100) == 11) {
			cout << "odinnadcat' ";
		}
		else if ((number % 100) == 12) {
			cout << "dvenadcat' ";
		}
		else if ((number % 100) == 13) {
			cout << "trinadcat' ";
		}
		else if ((number % 100) == 14) {
			cout << "chetyrnadcat' ";
		}
		else if ((number % 100) == 15) {
			cout << "pyatnadcat' ";
		}
		else if ((number % 100) == 16) {
			cout << "shestnadcat' ";
		}
		else if ((number % 100) == 17) {
			cout << "semnadcat' ";
		}
		else if ((number % 100) == 18) {
			cout << "vosemnadcat' ";
		}
		else if ((number % 100) == 19) {
			cout << "devyatnadcat' ";
		}
		if ((number % 100) / 10 == 10) {
			cout << "desyat' ";
		}
		else if ((number % 100) / 10 == 2) {
			cout << "dvadcat' ";
		}
		else if ((number % 100) / 10 == 3) {
			cout << "tridcat' ";
		}
		else if ((number % 100) / 10 == 4) {
			cout << "sorok ";
		}
		else if ((number % 100) / 10 == 5) {
			cout << "pyat'desyat ";
		}
		else if ((number % 100) / 10 == 6) {
			cout << "shest'desyat ";
		}
		else if ((number % 100) / 10 == 7) {
			cout << "sem'desyat ";
		}
		else if ((number % 100) / 10 == 8) {
			cout << "vosem'desyat ";
		}
		else if ((number % 100) / 10 == 9) {
			cout << "devyanosto ";
		}
		if (number % 10 == 1) {
			cout << "odin rubl'";
		}
		else if (number % 10 == 2) {
			cout << "dva rublya";
		}
		else if (number % 10 == 3) {
			cout << "tri rublya";
		}
		else if (number % 10 == 4) {
			cout << "chetyre rublya";
		}
		else if (number % 10 == 5) {
			cout << "pyat' rublej";
		}
		else if (number % 10 == 6) {
			cout << "shest' rublej";
		}
		else if (number % 10 == 7) {
			cout << "sem' rublej";
		}
		else if (number % 10 == 8) {
			cout << "vosem' rublej";
		}
		else if (number % 10 == 9) {
			cout << "devyat' rublej";
		}
}
