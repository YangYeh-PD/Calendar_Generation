#include <stdio.h>
#include <stdlib.h>

int year_days(int);
int month_days(int, int);
int acdays(int, int); // Accumulate days from Jan 1, 0001

int main(int argc, char *argv[])
{
	int year = atoi(argv[2]), month = atoi(argv[1]), days = acdays(month, year), blanks = (days % 7) + 1;
	printf("Sun Mon Tue Wed Thu Fri Sat\n");
	for (int i = 0; i < blanks % 7; i++) {
		printf("    ");
	}
	for (int i = 1; i <= month_days(month, year); i++) {
		if (((blanks + i) % 7) == 1) {
			if (i != 1) {
				printf("\n");
			}
		}
		printf(" %02d ", i);
	}

	return 0;
}

int year_days(int year)
{
	if ((year % 4) == 0) {
		if ((year % 100) == 0) {
			if ((year % 400) == 0) {
				return 366;
			} else {
				return 365;
			}
		} else {
			return 366;
		}
	} else {
		return 365;
	}
}

int month_days(int month, int year)
{
	if (month < 8) {
		if ((month % 2) == 0) {
			if (month == 2) {
				if (year_days(year) == 366) {
					return 29;
				} else {
					return 28;
				}
			} else {
				return 30;
			}
		} else {
			return 31;
		}
	} else {
		if ((month % 2) == 0) {
			return 31;
		} else {
			return 30;
		}
	}
}

int acdays(int month, int year)
{
	int days = 0;
	// year acdays
	for (int i = 1; i < year; i++) {
		days += year_days(i);
	}
	// month acdays
	for (int i = 1; i < month; i++) {
		days += month_days(i, year);
	}

	return days;
}
