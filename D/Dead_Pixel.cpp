// Dead Pixel
// https://codeforces.com/problemset/problem/1315/A
// Aman Kumar

/*
	INSIGHT:
		- If we take dead pixel into account, there will be 4 areas ABOVE, BELOW, LEFT and RIGHT of that pixel.
    - Return max of them.
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
	ll h, w, x, y ;
	cin >> h >> w >> y >> x ;
	
	ll maxarea = max( (h-y-1)*(w), y*w ) ;
	
	maxarea = max( maxarea, max( h*x, h*(w-x-1) )) ;
	
	cout << maxarea << "\n" ;
}
