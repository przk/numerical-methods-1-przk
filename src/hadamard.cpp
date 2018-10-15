#include "hadamard.h"

// Implement your function here.
//AB[i][j]=A[i][j]*B[i][j]

void hadamard(double **A, double **B, double **AB, int m, int n)
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			AB[i][j]=A[i][j]*B[i][j];
		}
	}
}

