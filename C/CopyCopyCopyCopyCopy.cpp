// CopyCopyCopyCopyCopy
// https://codeforces.com/problemset/problem/1325/B
// Aman Kumar

/*
	INSIGHT:
		- Return number of uniq elements
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
	
	vector<int> arr(n) ;
	
	set<int> uniq ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> arr[i] ;
		uniq.insert( arr[i] ) ;
	}
	
	cout << uniq.size() << "\n" ;
}
