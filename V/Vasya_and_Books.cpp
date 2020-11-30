// Vasya and Books
// https://codeforces.com/problemset/problem/1073/B
// Aman Kumar


/*
	INSIGHT: 
		- Use map to store positions of elements.
		- Simulate and store count number of books moved.
	
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
	
	vector<int> arr(n), use(n) ;
	
	for( int i = 0; i < n ; i++ )
	{
		cin >> arr[i] ;
	}
	for( int i = 0; i < n ; i++ )
	{
		cin >> use[i] ;
	}
	
	map<int,int> pos ;
	
	for( int i = 0; i < n ; i++ )
	{
		pos[ arr[i] ] = i ;
	}
	
	vector<int> ans ;
	
	int start = 0 ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		int index = pos[ use[i] ] ;
		
		// If already in the stack
		if( index == -1 )
			ans.push_back( 0 ) ;
		else
		{
			//ans.push_back( index+1 ) ;
			
			int j = start, count = 0 ;
			
			for(  ; j <= index ; j++ )
			{
				count++ ;
				pos[ arr[j] ] = -1 ;
			}
			start = index + 1 ;
			
			ans.push_back( count ) ;
		}
	}
	// Print ans
	for( int i = 0 ; i < n ; i++ )
	{
		cout << ans[i] << " " ; 
	}
	cout << "\n" ;
}
