// Pens and Pencils
// https://codeforces.com/problemset/problem/1244/A
// Aman Kumar


/*
	INSIGHT:
	- Calculate min number of pens and pencils needed.
	- Check if their sum is <= k/
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
	
	while( t-- ) func() ;
	
	return 0 ;
}

void func()
{
	int a, b, c, d, k ;
	cin >> a >> b >> c >> d >> k ;
	
	/*
		a : number of lectures
		b : number of praticals
		
		c : number of lectures per pen
		d : number of practicals per pencil
		
		k : max limit
	*/
	int num_pen = 0, num_pencil = 0 ;
	
	// Calculate min possible answer
	num_pen = ceil( float( (a * 1.0) / c )) ;
	num_pencil = ceil( float( (b * 1.0) /d )) ;
	
	if( num_pen + num_pencil <= k )
		cout << num_pen << " " << num_pencil << "\n" ;
	else
		cout << "-1\n" ;
	
}
