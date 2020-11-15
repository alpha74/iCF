// Boring Apartments
// https://codeforces.com/problemset/problem/1433/A
// Aman Kumar


/*
	INSIGHT:
		- Count number of digits.
		- Get face value of number.
		- Add values till (face-1) in range (1-4)
		- Add count till the number of digits of that face
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
	
	int num_digits = 0 ;
	int num = n ;
	
	while( num > 0 )
	{
		num_digits++ ;
		num = num / 10 ;
	}
	
	int face = n % 10 ;
	
	long long int sum = 0 ;
	
	for( int i = 0 ; i < face-1 ; i++ )
	{
		for( int j = 0 ; j < 4 ; j++ )
		{
			sum += (j+1) ;
		}
	}
	
	for( int i = 0 ; i < num_digits ; i++ )
	{
		sum += (i+1) ;
	}
	
	cout << sum << "\n" ;
}

