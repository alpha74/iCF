// Array Stabalisation
// https://codeforces.com/problemset/problem/1095/B
// Aman Kumar


/*
	INSIGHT: 
		- Get min by removing either first highest or second lowest.
	
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int
#define ss second
#define ff first

void mandalore() ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t = 1 ;
	//cin >> t ;
	
	while( t-- ) mandalore() ;
	
	return 0 ;
}

void mandalore()
{
	int n ;
	cin >> n ;
	
	vector<int> arr(n) ;
	
	for( int i = 0; i < n ; i++ )
	{
		cin >> arr[i] ;
	}
	
	sort(arr.begin(), arr.end() ) ;
	
	int ans = INT_MAX ;
	
	if( n == 2 )
		ans = 0 ;
	else
	{
		int fhigh = arr[ n-1 ] ;
		int shigh = arr[ n-2 ] ;
		
		int flow = arr[0] ;
		int slow = arr[1] ;
		
		// If first highest is removed
		ans = min( ans, (shigh-flow)) ;
		
		ans = min( ans, (fhigh-slow) ) ;		
	}
	cout << ans << "\n" ;
}
