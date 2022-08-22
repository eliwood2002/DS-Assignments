#include <iostream>
#include <string>
using namespace std;

int main() {

	//declare variables
	int numgames;
	int queries;
	int total = 0;

	//getting the number of games in store then declaring an array with the number of games.
	cin >> numgames;

	int *prices = new int(numgames);


	//for loop to get the array numbers.
	for (int i = 0; i < numgames; i++) {
		cin >> prices[i];
	}

	// gettting the number of queries to test and give answer to.
	cin >> queries;

	int *tests = new int(queries);

	for(int i = 0; i < queries; i++){
		cin >> tests[i];
	}

	//create array to store the different totals to print them after.
	int* totals = new int(queries);
	
	for (int i = 0; i < queries; i++) {
		total = 0;
		for (int x = 0; x < numgames; x++) {
			if (prices[x] < tests[i]) {
				total += 1;
			}
		}
		totals[i] = total;
	}

	for (int i = 0; i < queries; i++) {
		cout << totals[i] << endl;
	}


	return 0;
}