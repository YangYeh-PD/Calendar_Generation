#include <iostream>
#include <iomanip>
#include "calendar.h"
using namespace std;

Calendar::Calendar(int m, int y) {
	month = m;
	year = y;
	acdays = 0;
}
void Calendar::days() {
	// Add days in previous years
	for (int i = 1; i < year; i++) {
		acdays += year_day(i);
	}
	// Add days in previous months
	for (int i = 1; i < month; i++) {
		acdays += month_day(i, year);
	}
}
void Calendar::print() {
	blanks = (acdays % 7) + 1;
	cout << "Sun Mon Tue Wed Thu Fri Sat " << endl;
	for (int i = 0; i < blanks && blanks != 7; i++) {
		cout << "    ";
	}
	for (int i = 1; i <= month_day(month, year); i++) {
		if ((blanks + i) % 7) {
			cout << " " << setfill('0') << setw(2) << i << " ";
		} else {
			cout << " " << setfill('0') << setw(2) << i << "\n";
		}
	}
}
int Calendar::month_day(int m, int y) {
	if (m < 8) {
		if (m == 2) {
			if (year_day(y) == 366) {
				return 29;
			} else {
				return 28;
			}
		} else {
			if (m % 2) {
				return 31;
			} else {
				return 30;
			}
		}
	} else {
		if (m % 2) {
			return 30;
		} else {
			return 31;
		}
	}
}
int Calendar::year_day(int y) {
	if (y % 4) {
		return 365;
	} else {
		if (y % 100) {
			return 366;
		} else {
			if (y % 400) {
				return 365;
			} else {
				return 366;
			}
		}
	}
}