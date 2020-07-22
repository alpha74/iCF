// Elephant
// https://codeforces.com/problemset/problem/617/A
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
	ll point ;
	cin >> point ;
	
	ll steps = 0 ;
	
	steps += point / 5 ;
	point %= 5 ;
	
	steps += point / 4 ;
	point %= 4 ;
	
	steps += point / 3 ;
	point %= 3 ;
	
	steps += point / 2 ;
	point %= 2 ;
	
	steps += point / 1 ;
	point %= 1 ;
	
	cout << steps << "\n" ;
	
}
