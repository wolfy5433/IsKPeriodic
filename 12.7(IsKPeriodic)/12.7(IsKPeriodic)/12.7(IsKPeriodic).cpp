#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
void IsKPeriodic(int k, string& arr)
{
	cout << "Длина строки: " << arr.size() << endl;
	if (k < 1) // проверка условия K > 0
	{
		cout << "K должно быть больше 0" << endl;
		cout << endl;
	}
	else if (arr.size() % k != 0)//
	{
		cout << "Строка '" << arr << "' не кратна " << k << endl;
		cout << endl;
	}
	else if (k == arr.size())
	{
		cout << "Так как K равно длинне строки,то строка '" << arr << "' не кратна " << k << ",поскольку она не имеет переодичности" << endl;
		cout << endl;
	}
	else
	{
		int j = 0;
		string chk;
		for (int z = 0; z < k; z++)
		{
			chk.push_back(arr[z]);
		}
		int i = chk.size();
		while (i < arr.size())
		{
			if (j == chk.size())
			{
				j = 0;
			};
			if (arr[i] == chk[j])
			{
				j++;
				i++;
			}
			else
			{
				cout << "Строка '" << arr << "' не кратна " << k << endl;
				cout << endl;
				break;
			}
			if (i == arr.size())
			{
				cout << "Строка '" << arr << "' кратна " << k << endl;
				cout << endl;
			}
		}
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string txt;
	int K;
	cout << "Сообщение: ";
	getline(cin, txt);
	char choice;
	cout << "Выберите, что вы хотите сделать: 1.Проверить строку на кратность 2.Выйти из программы" << endl;
	cin >> choice;
	while (choice != '2')
	{
		switch (choice)
		{
		case '1':
		{
			cout << "Введите, на какую кратность вы хотите проверить строку: ";
			cin >> K;
			IsKPeriodic(K, txt);
			break;
		}
		default:
		{
			cout << "Такого действия нет" << endl;
			break;
		}

		}
		cout << "Выберите, что вы хотите сделать: 1.Проверить строку на кратность 2.Выйти из программы" << endl;
		cin >> choice;
	}
	return 0;
}