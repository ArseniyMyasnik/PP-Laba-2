#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int number;
	cout << "������� ����� �� 1 �� 999999: ";
	cin >> number;
	while ((number <= 0) || (number > 999999)) {
		cout << "��������� ����� �� � ��������� 1-999999: ";
		cin >> number;
	}
		if (number / 100000 == 1) {
		cout << "��� ";
	}
	else if (number / 100000 == 2) {
		cout << "������ ";
	}
	else if (number / 100000 == 3) {
		cout << "������ ";
	}
	else if (number / 100000 == 4) {
		cout << "��������� ";
	}
	else if (number / 100000 == 5) {
		cout << "������� ";
	}
	else if (number / 100000 == 6) {
		cout << "�������� ";
	}
	else if (number / 100000 == 7) {
		cout << "������� ";
	}
	else if (number / 100000 == 8) {
		cout << "��������� ";
	}
	else if (number / 100000 == 9) {
		cout << "��������� ";
	}
		if ((number % 100000) / 1000 == 11) {
			cout << "����������� ����� ";
			}
		else if ((number % 100000) / 1000 == 12) {
			cout << "���������� ����� ";
			}
		else if ((number % 100000) / 1000 == 13) {
			cout << "���������� ����� ";
			}
		else if ((number % 100000) / 1000 == 14) {
			cout << "������������ ����� ";
			}
		else if ((number % 100000) / 1000 == 15) {
			cout << "���������� ����� ";
			}
		else if ((number % 100000) / 1000 == 16) {
			cout << "����������� ����� ";
		}
		else if ((number % 100000) / 1000 == 17) {
			cout << "���������� ����� ";
			}
		else if ((number % 100000) / 1000 == 18) {
			cout << "������������ ����� ";
			}
		else if ((number % 100000) / 1000 == 19) {
			cout << "������������ ����� ";
			}
		if ((number % 100000) / 1000 == 10) {
			cout << "������ ";
		}
		else if ((number % 100000) / 10000 == 2) {
			cout << "�������� ";
		}
		else if ((number % 100000) / 10000 == 2) {
			cout << "�������� ";
		}
		else if ((number % 100000) / 10000 == 3) {
			cout << "�������� ";
		}
		else if ((number % 100000) / 10000 == 4) {
			cout << "����� ";
		}
		else if ((number % 100000) / 10000 == 5) {
			cout << "��������� ";
		}
		else if ((number % 100000) / 10000 == 6) {
			cout << "���������� ";
		}
		else if ((number % 100000) / 10000 == 7) {
			cout << "��������� ";
		}
		else if ((number % 100000) / 10000 == 8) {
			cout << "����������� ";
		}
		else if ((number % 100000) / 10000 == 9) {
			cout << "��������� ";
		}
		if ((number % 10000) / 1000 == 0 && (number>999)) {
			cout << "����� ";
		}
		else if ((number % 10000) / 1000 == 1 && (number % 100000) / 1000 != 11) {
			cout << "���� ������ ";
		}
		else if ((number % 10000) / 1000 == 2 && (number % 100000) / 1000 != 12) {
			cout << "��� ������ ";
		}
		else if ((number % 10000) / 1000 == 3 && (number % 100000) / 1000 != 13) {
			cout << "��� ������ ";
		}
		else if ((number % 10000) / 1000 == 4 && (number % 100000) / 1000 != 14) {
			cout << "������ ������ ";
		}
		else if ((number % 10000) / 1000 == 5 && (number % 100000) / 1000 != 15) {
			cout << "���� ����� ";
		}
		else if ((number % 10000) / 1000 == 6 && (number % 100000) / 1000 != 16) {
			cout << "����� ����� ";
		}
		else if ((number % 10000) / 1000 == 7 && (number % 100000) / 1000 != 17) {
			cout << "���� ����� ";
		}
		else if ((number % 10000) / 1000 == 8 && (number % 100000) / 1000 != 18) {
			cout << "������ ����� ";
		}
		else if ((number % 10000) / 1000 == 9 && (number % 100000) / 1000 != 19) {
			cout << "������ ����� ";
		}
		if ((number % 1000) / 100 == 1) {
			cout << "��� ";
		}
		else if ((number % 1000) / 100 == 2) {
			cout << "������ ";
		}
		else if ((number % 1000) / 100 == 3) {
			cout << "������ ";
		}
		else if ((number % 1000) / 100 == 4) {
			cout << "��������� ";
		}
		else if ((number % 1000) / 100 == 5) {
			cout << "������� ";
		}
		else if ((number % 1000) / 100 == 6) {
			cout << "�������� ";
		}
		else if ((number % 1000) / 100 == 7) {
			cout << "������� ";
		}
		else if ((number % 1000) / 100 == 8) {
			cout << "��������� ";
		}
		else if ((number % 1000) / 100 == 9) {
			cout << "��������� ";
		}
		if ((number % 100) == 11) {
			cout << "����������� ";
		}
		else if ((number % 100) == 12) {
			cout << "���������� ";
		}
		else if ((number % 100) == 13) {
			cout << "���������� ";
		}
		else if ((number % 100) == 14) {
			cout << "������������ ";
		}
		else if ((number % 100) == 15) {
			cout << "���������� ";
		}
		else if ((number % 100) == 16) {
			cout << "����������� ";
		}
		else if ((number % 100) == 17) {
			cout << "���������� ";
		}
		else if ((number % 100) == 18) {
			cout << "������������ ";
		}
		else if ((number % 100) == 19) {
			cout << "������������ ";
		}
		if ((number % 100) / 10 == 10) {
			cout << "������ ";
		}
		else if ((number % 100) / 10 == 2) {
			cout << "�������� ";
		}
		else if ((number % 100) / 10 == 3) {
			cout << "�������� ";
		}
		else if ((number % 100) / 10 == 4) {
			cout << "����� ";
		}
		else if ((number % 100) / 10 == 5) {
			cout << "��������� ";
		}
		else if ((number % 100) / 10 == 6) {
			cout << "���������� ";
		}
		else if ((number % 100) / 10 == 7) {
			cout << "��������� ";
		}
		else if ((number % 100) / 10 == 8) {
			cout << "����������� ";
		}
		else if ((number % 100) / 10 == 9) {
			cout << "��������� ";
		}
		if (number % 10 == 1) {
			cout << "���� �����";
		}
		else if (number % 10 == 2) {
			cout << "��� �����";
		}
		else if (number % 10 == 3) {
			cout << "��� �����";
		}
		else if (number % 10 == 4) {
			cout << "������ �����";
		}
		else if (number % 10 == 5) {
			cout << "���� ������";
		}
		else if (number % 10 == 6) {
			cout << "����� ������";
		}
		else if (number % 10 == 7) {
			cout << "���� ������";
		}
		else if (number % 10 == 8) {
			cout << "������ ������";
		}
		else if (number % 10 == 9) {
			cout << "������ ������";
		}
}
