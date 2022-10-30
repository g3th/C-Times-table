#include <iostream>
using namespace std;

string multiply(int num){
	int multiplier = 1;
	string ans;
	while (multiplier <= 10){
		ans += to_string(num)+" x "+ to_string(multiplier) + " = " + to_string(num * multiplier) + "\n";
		++ multiplier;
	}
	return ans;
}

int main(){
	int multiplicand;
	cout << "Enter multiplicand: " << endl;
	cin >> multiplicand;
	cout << "Here is your times table: "<< endl;
	cout << multiply(multiplicand);
}
