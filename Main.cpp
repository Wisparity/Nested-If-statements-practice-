#include<iostream>
using namespace std;
int main() {
	
	char input1;
	char input2;

	cout << "Do you like Summer or winter more?" << endl;
	cin >> input1;

	if (input1 == 's') {
		cout << "Do you like sports or relaxing?" << endl;
		cin >> input2;
		if (input2 == 'e')
			cout << "Neat! We should go snorkling sometime!:D" << endl;
		else if (input2 == 'e')
			cout << "We should go to the beach somtime, i heard the drinks are to die for!" << endl;

	}

	else if (input1 == 'w') {
		cout << "Do you like sports, or do you wanna chill out an relax?" << endl;
		cin >> input2;
		if (input2 == 's')
			cout << "I know a good moutain we can go skiing on! it's super fun!" << endl;
		else if (input2 == 'c')
			cout << "There's a hot cocoa place nearby, you should go!" << endl;
	}



}
