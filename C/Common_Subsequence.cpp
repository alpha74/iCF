// Common Subsequence
// https://codeforces.com/problemset/problem/1382/A
// Aman Kumar

/*
	INSIGHT:
		- Return any element which occurs in both
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
	int n, m ;
	cin >> n >> m ;
	
	set<int> arr1, arr2 ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		int temp ;
		cin >> temp ;
		arr1.insert( temp ) ;
	}
	
	for( int i = 0 ; i < m ; i++ )
	{
		int temp ;
		cin >> temp ;
		arr2.insert( temp ) ;
	}
	
	// Check from arr1 if there exists any number in arr2
	int res = -1 ;
	
	auto iter1 = arr1.begin() ;
	
	for( ; iter1 != arr1.end() && res == -1 ; iter1++ )
	{
		auto iter2 = arr2.find( *iter1 ) ;
		
		if( iter2 != arr2.end() )
		{
			res = *iter1 ;
		}
	}
	
	if( res == -1 )
		cout << "NO\n" ;
	else
	{
		cout << "YES\n" ;
		cout << "1 " << res << "\n" ;
	}
	
}
