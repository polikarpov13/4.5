#include <iostream>
#include <iomanip> 
#include <cmath>
#include <time.h>

using namespace std;

int main()
{
	double x;
	double y;
	double R;

	srand((unsigned)time(NULL));


	for (int i = 0; i < 10; i++) {

		cout << "X = ";
		cin >> x;

		cout << endl;

		cout << "Y = ";
		cin >> y;

		cout << endl;

		cout << "R = ";
		cin >> R;

		cout << endl;

		if ((pow(y, 2)) <= (pow(R, 2) - pow(x, 2)) && y >= 0 && x >= 0 ||
			(y <= 0) && (y >= (-R / R) * (x + R)) && x <= 0)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}

	cout << endl;

	for (int i = 0; i < 10; i++) {

		cout << "R = ";

		cin >> R;

		x = -R + rand() * (R + R) / RAND_MAX;
		y = -R + rand() * (R + R) / RAND_MAX;

		if ((pow(y, 2)) <= (pow(R, 2) - pow(x, 2)) && y >= 0 && x >= 0 ||
			(y <= 0) && (y >= (-R / R) * (x + R)) && x <= 0)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}

	cout << endl;


	system("pause");
	return 0;
}
