#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv []) {

	vector<string> myVector;

	while(true) {

	string input;
	cin >> input;
	if (input == "quit") {

		break;
	}

	if (input.length() > 1) {
		myVector.push_back(input);
	}
	
	if (input.length() == 1){

		for (int i =0; i <myVector.size(); i++) {
			if (myVector[i].substr(0,1) == input) {
				cout << myVector[i]<<endl;
			}
		}
	}
}

return 0;
}
