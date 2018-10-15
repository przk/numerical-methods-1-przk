#include "hadamard.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  // Declare your matrices using pointers.
  // Launch your `hadamard` function and print results.
  
  int m, n;
  m=3; n=3; //przykladowy rozmiar
  
  double **A, **B, **AB;
  A = new double *[m];
  B = new double *[m];
  AB = new double *[m];
  
  for(int i=0; i<m; i++)
  {
  	A[i] = new double[n];
	B[i] = new double[n];
  	AB[i] = new double[n];
  }
  
  for(int i=0; i<m; i++)
  {
  	for(int j=0; j<n; j++)
  	{
  		A[i][j]=3; //przykladowe dane
  		B[i][j]=2; //przykladowe dane
  		AB[i][j]=0; //zerowanie
  	}
  }
  
  hadamard(A,B,AB,m,n);
  
  for(int i=0; i<m; i++)
  {
  	for(int j=0; j<n; j++)
  	{
  		cout<<AB[i][j]<<" ";
  	}
  	cout<<endl;
  }
  
  return 0;
}
