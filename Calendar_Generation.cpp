#include <cstdlib>
#include "calendar.h"

int main(int argc, char *argv[])
{
	Calendar date(atoi(argv[1]), atoi(argv[2]));
	date.days();	// Calculate acdays
	date.print();	// Print out the Calendar Format

	return 0;
}
