#include <iostream>
#include <string>
using namespace std;


int main(int argc, const char * argv[] ){

	string C;
	int N;
	string input;

	while(true){
	
	cin >> C;
	cin >> N;

	if (N == -2) {
		break;
	}

	if (N == -1) {
		cout << endl;
	}

	for (int i = 0; i <N; i++){
		cout << C;
	}
}

return 0;

}
