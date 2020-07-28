// Move Brackets
// https://codeforces.com/problemset/problem/1374/C
// Aman Kumar

/*
	INSIGHT:
		- Count mismatch on getting ')' in mismatch
		- Add number of '(' left in stack to it
		- If not regular, return mismatch/2
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

#define ff first
#define ss second
#define MOD 1000000007

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
	
	string b ;
	cin >> b ;
	
	stack<char> stk ;
	
	int mismatch = 0 ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		if( b[i] == '(' )
			stk.push( '(' ) ;
			
		// )	
		else
		{
			if( stk.size() > 0 )
			{
				if( stk.top() == '(' )
				{
					stk.pop() ;
				}
			}
				
			else
				mismatch++ ;
		}
	}
	
	mismatch += stk.size() ;
	
	if( mismatch == 0 )
		cout << "0\n" ;
	else
		cout << mismatch/2 << "\n" ;
	
}
