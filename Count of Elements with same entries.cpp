#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 
// Return the number of pairs with equal
// values.
int countPairs(int arr[], int n)
{
    int count[1000];
    for (int i = 0; i < 1000; ++i)
    {
    	/* code */
    	count[i]=0;
    }

    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	count[arr[i]]++;
    }

    int ans =0;
    for(int i=0;i<1000;i++){
        ans =ans +(count[i]*(count[i]-1))/2;
    }
    return ans;
}
 
// Driven Program
int main()
{
	int n;
	cin>>n;

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
    	/* code */
    	cin>>arr[i];
    }
    
    cout << countPairs(arr, n) << endl;
    return 0;
}