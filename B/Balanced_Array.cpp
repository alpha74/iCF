// Balanced Array
// https://codeforces.com/problemset/problem/1343/B
// Aman Kumar

/*
	INSIGHT:
		- If n not divisible by 4, NO
		- Else, append n/2 elements starting from 2 with interval +2
			- Append, n/2-1 elements starting from 1 with interval +2
			- Last odd number is sumeven-sumodd halves
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
	int n ;
	cin >> n ;
	
	bool ans = true ;
	vector<int> res ;
	
	if( n % 4 != 0 )
		ans = false ;
	else
	{
		int sumeven = 0 ;
		int sumodd = 0 ;
		
		for( int i = 2 ; i <= n ; i +=2 ) 
		{
			res.push_back( i ) ;
			sumeven += i ;
		}
		int p = 1 ;
		for( int i = 1 ; i < n/2 ; i++ ) 
		{
			res.push_back( p ) ;
			sumodd += p ;
			p += 2 ;
		}
		res.push_back( sumeven - sumodd ) ;
	}
	
	if( ans == false )
		cout << "NO\n" ;
	else
	{
		cout << "YES\n" ;
		
		for( int i = 0 ; i < n ; i++ )
		{
			cout << res[i] << " " ;
		}
		cout << "\n" ;
	}
}
