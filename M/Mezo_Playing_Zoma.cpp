// Mezo Playing Zoma
// https://codeforces.com/problemset/problem/1285/A
// Aman Kumar

/*
	INSIGHT:
		- See code
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

void func() ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	//int t ;
	//cin >> t ;
	
	//while( t-- )
	{
		func() ;
	}
	
	return 0 ;
}


void func()
{
	int n ;
	cin >> n ;
	
	string s ;
	cin >> s ;
	
	int countl = 0, countr = 0 ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		if( s[i] = 'L' )
			countl++ ;
		else
			countr++ ;
	}
	
	cout << countl + countr + 1 ;
}
