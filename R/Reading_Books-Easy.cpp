// Reading Books-Easy
// https://codeforces.com/contest/1374/problem/E1
// Aman Kumar

/*
	INSIGHT: 
		- Store 1 1, 1 0 and 0 1 in separate arrays
		- Sort 01 and 10 arrays
		- Combine them taking 1 from each of 01 and 10
		- Add their read and append in 11 array
		- Sort 11 array
		- Add first k read times
		- This is the answer
*/

#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define ff first
#define ss second
#define MOD 1000000007

void func() ;

int main() 
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie(0) ;
	
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
	int n, k ;
	cin >> n >> k ;
	
	vector<int> both ;
	vector<int> alice ;
	vector<int> bob ;
	
	int tta = 0, ttb = 0 ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		int r, a, b ;
		cin >> r >> a >> b ;
		
		
		if( a == 1 && b == 1 )
		{
			tta++ ;
			ttb++ ;
			both.push_back( r ) ;
		}
		else if( a == 1 )
		{
			tta++ ;
			alice.push_back( r ) ;
		}
		else if( b == 1 )
		{
			ttb++ ;
			bob.push_back( r ) ;
		}
	}
	
	if( tta < k || ttb < k )
		cout << "-1\n" ;
	else
	{
		sort( alice.begin(), alice.end() ) ;
		sort( bob.begin(), bob.end() ) ;
		
		int i = 0, j = 0 ;
		while( i < alice.size() && j < bob.size() )
		{
			both.push_back( alice[i++] + bob[j++] ) ;
		}
		
		sort( both.begin(), both.end() ) ;
		
		ll ans = 0 ;
		
		for( int i = 0 ; i < both.size() && i < k ; i++ )
		{
			ans += both[i] ;			
		}
		
		cout << ans << "\n" ;
	}
	
}
