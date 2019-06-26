/*This program prompts the user for the current year, the current month
the user's current age and birth month, another year, and another month.
It then calculates the age the user either was or will be in the second 
year and month entered.*/

/* Author: Brian Crow
Last edited: 20Jun2017 */

#include <iostream>

using namespace std;

int main()
{
	int year_now, age_now, month_now, birth_month, another_year, another_month, another_age, another_age_months;

	cout << "Enter the current year and press RETURN.\n";
	cin >> year_now;

	// needed for current age
	cout << "Enter the current month, 1-12, and press RETURN.\n";
	cin >> month_now;

	cout << "Enter your current age in years.\n";
	cin >> age_now;

	cout << "Enter the month in which you were born.\n";
	cin >> birth_month;

	cout << "Enter the year for which you wish to know your age.\n";
	cin >> another_year;

	cout << "Enter the month for this other year.\n";
	cin >> another_month;

	if (month_now >= birth_month) {
		if (another_month >= birth_month) {
			another_age_months = another_month - birth_month;
			another_age = age_now + another_year - year_now;
		} else {
			another_age_months = 12 + another_month - birth_month;
			another_age = age_now - 1 + another_year - year_now;
		}
	} else {
		if (another_month >= birth_month) {
			another_age_months = another_month - birth_month;
			another_age = age_now + 1 + another_year - year_now;
		} else {
			another_age_months = 12 + another_month - birth_month;
			another_age = age_now + 1 + another_year - year_now;
		}
	}

	if (another_age >= 150) {
		cout << "Sorry, but you will probably be dead in ";
		cout << another_year << ".\n";
	} else if (another_age >= 0) {
		cout << "Your age in the " << another_month;
		if (another_month == 1) {
			cout << "st";
		} else if (another_month == 2) {
			cout << "nd";
		} else if (another_month == 3) {
			cout << "rd";
		} else {
			cout << "th";
		}
		cout << " month of " << another_year << ": ";
		cout << another_age << " years and " << another_age_months;
		if (another_age_months == 1) {
			cout << " month.\n";
		} else {
			cout << " months.\n";
		}
	} else {
		cout << "You weren't even born in ";
		cout << another_month << "/" << another_year << "!\n";
	}

	return 0;
}
