#include<iostream>
#include<bits/stdc++.h>
using namespace std;




// Driven Program
int main()
{
	int m,n;
	cin>>m>>n;

	int a[m][n];
	int count[m];

	for (int i = 0; i < m; ++i)
	{
    	/* code */
		for (int j = 0; j < n; ++j)
		{

			cin>>a[i][j];

		}

	}

	for (int i = 0; i < m; ++i)
	{
    	/* code */
		count[i]=0;

	}
	int j=n-1;
	int i= 0;

	while(j>=0 && i<n){

		if(a[i][j]>=0){
			j--;
		}
		else{
			count[i]=j+1;
			i++;
		}

	}
	int ans=0;
	for (int i = 0; i < m; ++i)
	{
    	/* code */
		ans= count[i]+ans;;

	}
	cout<<ans ;



	return 0;
}