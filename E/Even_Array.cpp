// Even Array
// https://codeforces.com/contest/1367/problem/B
// Author: Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

int evenParity( vector<int> &A )
{
	int Asize = A.size() ;
	
	int celem1 = 0 ;
	int cindex1 = Asize / 2 ;
	int mismatch = 0 ;
	
	// Calculate number of mismatches
	for( int i = 0 ; i < Asize ; i++ )
	{
		// 1s
		if( A[i] % 2 != 0 )
			celem1++ ;
			
		// mismatch
		if( A[i] % 2 != i % 2 )	
			mismatch++ ;
	}
	
	// If count of 1 in elements is not equal to count of 1s in index
	if( celem1 != cindex1 )
		return -1 ;
	else
		return mismatch/2 ;
}

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
		
		vector<int> arr ;
		for( int i = 0 ; i < n ; i++ )
		{
			int temp ;
			cin >> temp ;
			arr.push_back( temp ) ;
		}
		
		cout << evenParity( arr ) << "\n" ;
		
	}
	return 0 ;
}
