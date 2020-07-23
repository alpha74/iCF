// Keanu Reeves
// https://codeforces.com/problemset/problem/1189/A
// Aman Kumar

/*
	INSIGHT:
		- Count number of 0s and 1s.
    - If not equal print same string.
    - Else, print first n-1, then space, then last. Check for n>1
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
	
	int count1 = 0, count0 = 0 ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		if( s[i] == '0' )
		{
			count0++ ;
		}
		if( s[i] == '1' )
		{
			count1++ ;
		}
	}
	
	if( count0 != count1 )
		cout << 1 << "\n" << s ;
	else
	{
		cout << 2 << "\n" ;
		for( int i = 0 ; i < n-1 ; i++ )
			cout << s[i] ;
		
		cout << " " ;
		
		if( n > 1 )
			cout << s[n-1] ;
	}
	
	cout << "\n" ;
}
