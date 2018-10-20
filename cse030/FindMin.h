#ifndef FindMin_h
#define FindMin_h

// Declare and define the findMin function here
int findMin (int A[], int s, int n) {
int v, p;
v = A[s];
p = s; 
	for (int i = s; s < n; s++) {
		if (A[i] < v) {
v = A[i];
p = i;
}
}
return p;
}
// Do not write any code below this line
#endif