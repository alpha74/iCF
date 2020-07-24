// Changing Volume
// https://codeforces.com/problemset/problem/1255/A
// Aman Kumar

/*
	INSIGHT:
		- See code
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

#define ff first
#define ss second
#define MOD 1000000007

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
	int a, b ;
	cin >> a >> b ;
	
	int count = 0 ;
	
	b = abs(b-a) ;

	if( b / 5 > 0 )
	{
		count += (b/5) ;
		b = b % 5 ;
	}
	
	if( b / 2 > 0 )
	{
		count += (b/2) ;
		b = b % 2 ;
	}

	if( b > 0 )
	{
		count += (b/1) ;
		b = b % 1 ;
	}
	
	cout << count << "\n" ;
}
