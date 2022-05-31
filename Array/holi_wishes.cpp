// CPP program to print Happy Holi
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// Print first row
	// You can choose any char
	char ch = 'D';
	for (int i = 1; i <= 34; i++) {
		if (i == 4 || i == 7 || i == 10 ||
		i == 11 || i == 14 || i == 15 ||
		i == 16 || i == 17 || i == 19 ||
		i == 20 || i == 21 || i == 22 ||
		i == 24 || i == 27)
			cout << ch;
		else
			cout << " ";
	}

	// Print second row
	cout << endl;
	for (int i = 1; i <= 34; i++) {
		if (i == 4 || i == 7 || i == 9 ||
		i == 12 || i == 14 || i == 17 ||
		i == 19 || i == 22 || i == 24 ||
		i == 27)
			cout << ch;
		else
			cout << " ";
	}

	// Print third row
	cout << endl;
	for (int i = 1; i <= 34; i++) {
		if (i == 4 || i == 5 || i == 6 ||
		i == 7 || i == 9 || i == 10 ||
		i == 11 || i == 12 || i == 14 ||
		i == 15 || i == 16 || i == 17 ||
		i == 19 || i == 20 || i == 21 ||
		i == 22 || i == 25 || i == 26)
			cout << ch;
		else
			cout << " ";
	}

	// Print fourth row
	cout << endl;
	for (int i = 1; i <= 34; i++) {
		if (i == 4 || i == 7 || i == 9 ||
		i == 12 || i == 14 || i == 19 ||
		i == 25 || i == 26)
			cout << ch;
		else
			cout << " ";
	}

	// Print fifth row
	cout << endl;
	for (int i = 1; i <= 34; i++) {
		if (i == 4 || i == 7 || i == 9 || i == 12 ||
		i == 14 || i == 19 || i == 25 || i == 26)
			cout << ch;
		else
			cout << " ";
	}

	// Happy is printed, now print
	// Holi row by row
	cout << endl;
	cout << endl;
	cout << endl;

	// Print first row
	for (int i = 1; i <= 34; i++) {
		if (i == 4 || i == 7 || i == 10 || i == 11 ||
		i == 14 || i == 19 || i == 20 || i == 21 ||
		i == 22)
			cout << ch;
		else
			cout << " ";
	}

	// Print second row
	cout << endl;
	for (int i = 1; i <= 34; i++) {
		if (i == 4 || i == 7 || i == 9 || i == 12 ||
		i == 14 || i == 20 || i == 21)
			cout << ch;
		else
			cout << " ";
	}

	// Print third row
	cout << endl;
	for (int i = 1; i <= 34; i++) {
		if (i == 4 || i == 5 || i == 6 || i == 7 ||
		i == 9 || i == 12 || i == 14 || i == 20 ||
		i == 21)
			cout << ch;
		else
			cout << " ";
	}

	// Print fourth row
	cout << endl;
	for (int i = 1; i <= 34; i++) {
		if (i == 4 || i == 7 || i == 9 || i == 12 ||
		i == 14 || i == 20 || i == 21)
			cout << ch;
		else
			cout << " ";
	}

	// Print fifth row
	cout << endl;
	for (int i = 1; i <= 34; i++) {
		if (i == 4 || i == 7 || i == 10 || i == 11 ||
		i == 14 || i == 15 || i == 16 || i == 17 ||
		i == 19 || i == 20 || i == 21 || i == 22)
			cout << ch;
		else
			cout << " ";
	}
}
