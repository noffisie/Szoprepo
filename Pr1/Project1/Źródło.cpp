#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int godziny, minuty, sekundy;
	double dziesietny;
	const double minut = 1.0 / 60.0;
	const double sekund = 1.0 / 60.0 / 60.0;
	cout << "Wporwadz godziny: ";
	cin >> godziny;
	cout << endl << "Wporwadz minuty: ";
	cin >> minuty;
	cout << endl << "Wporwadz sekundy: ";
	cin >> sekundy;
	dziesietny = ((godziny*3600)+(minuty*60)+sekundy);
	cout << endl << godziny << " godzin, " << minuty << " minut i " << sekundy << " sekund = " << dziesietny << endl;
	return 0;
}