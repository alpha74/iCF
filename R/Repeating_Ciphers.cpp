// Repeating Ciphers
// https://codeforces.com/problemset/problem/1095/A
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
	
	int index = 0 ;
	cout << s[index] ;
	for( int i = 2 ; i+index < n ; i++ )
	{
		index += i ;
		cout << s[index] ;
	}
	cout << "\n" ;
}
