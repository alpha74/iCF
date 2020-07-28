// Multiply by 2, divide by 6
// https://codeforces.com/problemset/problem/1374/B
// Aman Kumar

/*
	INSIGHT:
		- Count number of times n is divisible by 2 and 3
		- If divisible by any other, return -1
		- If count2 > count3, return -1
		- Else return (count3-count2) + count3
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
	int n ;
	cin >> n ;
	
	int c2 = 0, c3 = 0 ;
	
	bool possible = true ;
	
	while( n > 1 && possible == true )
	{
		if( n % 2 == 0 )
		{
			c2++ ;
			n /= 2 ;
		}
		else if( n % 3 == 0 )
		{
			c3++ ;
			n /= 3 ;
		}
		else
			possible = false ;
	}
	
	if( possible )
	{
		if( c2 > c3 )
			possible = false ;
	}
	
	if( possible )
		cout << (c3-c2)+ c3 << "\n" ;
	else
		cout << "-1\n" ; 
	
}
