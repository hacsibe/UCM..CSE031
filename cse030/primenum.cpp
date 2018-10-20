#include <iostream>
using namespace std;

int main () {

int N;
int i;

cin >> N;

for (i = 2; N > i; i++) {

  bool isPrime = true;

	for (int j = 2; j < (i/2)+1; j++){

	  if (i % j == 0){
		isPrime = false;
		break;
    }
}
	if (isPrime){
		
		cout << i << endl;

    }
}
 return 0;
}
