// ConsoleApplication3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{


	double a, b, c;
	int numer;
	cout << "wybierz numer" << endl;
	cin >> numer;

	switch (numer)
	{
	case 1:
		a = 3.0; b = 3.0; c = 3.0; break;
	case 2:
		a = 3.0; b = 4.0; c = 3.0; break;
	case 3:
		a = 3.0; b = 4.0; c = 5.0; break;
	case 4:
		a = 2.0; b = 4.0; c = 5.0; break;
	case 5:
		a = 1.0; b = sqrt(2); c = 1.0; break;
	case 6:
		a = 0; b = 0; c = 0; break;
	case 7: a = 5.0; b = 1.0; c = 1.0; break;
	default:
		cout << "nie wpisałeś numeru";
	}




	if (0 < a && 0 < b && 0 < c)
	{
		if (a < b + c || b < a + c || c < a + b)
		{
			double p = (a + b + c) * 0.5;
			double pole = sqrt(p * (p - a) * (p - b) * (p - c));
			cout << "Pole trojkata wynosi: " << pole << endl;

			if (a == b || b == c || c == a)
				cout << "Mozna utworzyc trojkat rownoramienny\n";
			if (a == b && b == c && c == a)
				cout << "Mozna utworzyc trojkat rownoboczny\n";
			if (a != b && b != c && c != a)
				cout << "Mozna utworzyc trojkat roznoboczny\n";
			if (c * c == (a * a + b * b) || b * b == (a * a + b * b) || a * a == (b * b + c * c))
				cout << "Mozna utworzyc trojkat prostokatny\n";

		}
		else cout << "Z tych bokow nie da sie utworzyc trojkata!\n";
	}
	else cout << "Boki nie sa dodatnie!\n";

}


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
