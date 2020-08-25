// String Similarity
// https://codeforces.com/contest/1400/problem/A
// Aman Kumar

/*
	INSIGHT: 
		See code
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int
#define ff first
#define ss second
#define MOD 1000000007

#define FIO

void generalkenobi() ;

int main()
{
	#ifdef FIO
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie(0) ;
	#endif
	
	int t ;
	cin >> t; 
	
	while(t--) generalkenobi() ;
	
	return 0 ;
}

char doOR( char &a, char &b )
{
	if( a == '0' && b == '0' )
		return '0' ;
	
	return '1' ;
}

void generalkenobi()
{
	int n ;
	cin >> n ;
	
	string s ;
	cin >> s ;
	
	if( n == 1 )
	{
		if( s[0] == '0' )
			cout << "0\n" ;
		else
			cout << "1\n" ;
	}
	else
	{
		string ans = "" ;
		
		int temp = n ;
		
		while( temp-- )
		{
			ans += "0" ;
		}
		
		for( int i = 0 ; i < n ; i++ )
		{			
			for( int j = i, k = 0 ; j < i + n && k < n ; j++, k++ )
			{
				ans[k] = doOR( ans[k], s[j] ) ;	
			}
		}
		
		cout << ans << "\n" ;
	}
	
}
