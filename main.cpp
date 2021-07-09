#include <iostream>

using namespace std;

int main(){
	//Prompt User
	cout << "This program converts an amount of USD cents into USD coins." << endl;
	cout << "Enter an amount in cents: ";
	int cents_count {0};
	cin >> cents_count;
	// Variables to store counts of each coin	
	const int dollar_cents {100}, quarter_cents {25}, dime_cents {10}, nickel_cents {5}, penny_cents {1};
	int dollar_count {0}, quarter_count {0}, dime_count {0}, nickel_count {0}, penny_count {0};
	// Determine coin counts
	dollar_count = cents_count / dollar_cents;
	cents_count %= dollar_cents;
	quarter_count = cents_count / quarter_cents;
	cents_count %= quarter_cents;
	dime_count = cents_count / dime_cents;
	cents_count %= dime_cents;
	nickel_count = cents_count / nickel_cents;
	cents_count %= nickel_cents;
	penny_count = cents_count / penny_cents;
	cents_count %= penny_cents;
	
	cout << "You can provide this change as follows:" << endl;
	cout << "dollars: " << dollar_count << endl;
	cout << "quarters: " << quarter_count << endl;
	cout << "dimes: " << dime_count << endl;
	cout << "nickels: " << nickel_count << endl;
	cout << "pennies: " << penny_count << endl;
	
	if (cents_count != 0) {
		cout << "An error occurred. There's still " << cents_count << "unallocated." << endl;
	}
	
	
	return 0;
}