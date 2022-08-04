#include <bits/stdc++.h>
using namespace std;


void printMaxActivities(int s[], int f[], int n)
{
	int i, j;

	cout <<"Activity started:"<< endl;

	i = 0;
	cout <<" "<< i;

	for (j = 1; j < n; j++)
	{

	if (s[j] >= f[i])
	{
		cout <<" " << j;
		i = j;
	}
	}
}

int main()
{
	int s[] = {3, 4, 1, 7, 3, 9};
	int f[] = {2, 4, 6, 3, 8, 5};
	int n = sizeof(s)/sizeof(s[0]);
	printMaxActivities(s, f, n);
	return 0;
}
