// Omkar and Completion
// https://www.codeforces.com/problemset/problem/1372/A
// Author: Aman Kumar

// Since A[i] + A[j] != A[k], we can have all the elements same.

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int


int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t ;
	cin >> t ;
	
	while( t-- )
	{
		int n ;
		cin >> n ;
		
		for( int i = 1 ; i <= n ; i++ )
			cout << 1 << " " ;
		
		cout << "\n" ;
	}
	
	return 0 ;
}

