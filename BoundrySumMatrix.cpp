
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m, n, sum = 0;
	cout << "Enter the order of the matrix"<<endl;
	cin >> m >> n ;
	int i, j;
	int mat[m][n];
	cout << "Input the matrix elements"<<endl;
	for(i = 0; i < m; i++)
		{
			for(j = 0; j < n; j++)
			cin >> mat[i][j];
		}

	cout << "boundary matrix: "<<endl;
	for(i = 0; i < m; i++)
		{
			for(j = 0; j < n; j++)
				{
					if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
						{
							cout << mat[i][j] <<" ";
							sum = sum + mat[i][j];
						}
					else
							cout <<" ";
				}
		cout << endl;
	}
	cout << "Sum of boundary is "<< sum << endl;
}
