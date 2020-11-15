// Array Rearrangement
// https://codeforces.com/problemset/problem/1445/A
// Aman Kumar


/*
	INSIGHT:
		- Sort arr1 in ascending order.
		- Sort arr2 in descending order
		- Check ith sum in both
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

void func() ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t ;
	cin >> t ;
	
	while( t-- )
	{
		func() ;
	}
	
	return 0 ;
}

void func()
{
	int n, x ;
	cin >> n >> x ;
	
	vector<int> arr1(n) ;
	vector<int> arr2(n) ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> arr1[i] ;
	}
	
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> arr2[i] ;
	}
	
	sort( arr1.begin(), arr1.end() ) ;
	sort( arr2.rbegin(), arr2.rend() ) ;
	
	bool flag = true ;
	
	for( int i = 0 ; i < n && flag ; i++ )
	{
		if( arr1[i] + arr2[i] > x )
			flag = false ;
	}
	
	if( flag == true )
		cout << "Yes\n" ;
	else
		cout << "No\n" ;
}
