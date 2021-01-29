# Define year and month functions
def year_day(input_year):
	if input_year % 4 == 0:
		if input_year % 100 == 0:
			if i % 400 == 0:
				return 366
			else:
				return 365
		else:
			return 366
	else:
		return 365

def month_day(input_month):
	if input_month <= 7:
		if input_month % 2 != 0:
			return 31
		else:
			if input_month == 2:
				if year % 4 == 0:
					if year % 100 == 0:
						if year % 400 == 0:
							return 29
						else:
							return 28
					else:
						return 29
				else:
					return 28
			else:
				return 30
	else:
		if input_month % 2 == 0:
			return 31
		else:
			return 30

# Let user input specific year and month
year = int(input("Please input year:"))
month = int(input("Please input month:"))

# Print out the week label first
print("Sun Mon Tue Wed Thu Fri Sat")

# Calculate the total days from 0001/01/01 to the specific year
total_days = 1 # Since 0001/01/01 is Monday, the initial total days should be 1
for i in range(1, year):
	total_days += year_day(i)

# Add more total days until this month
for i in range(1, month):
	total_days += month_day(i)

# Calculating the start of the date of the month
the_start_of_the_date = (total_days) % 7

# Judge how many days it should have of this month
total_days_of_this_month = month_day(month)

# Print out the result
print('    ' * the_start_of_the_date, end = '')
date = the_start_of_the_date

for i in range(1, total_days_of_this_month + 1):
	if date <= 6:
		print(' ' + "%02.0f" % (i) + ' ', end = '')
		date += 1
	else:
		print()
		date = 0
		print(' ' + "%02.0f" % (i) + ' ', end = '')
		date += 1