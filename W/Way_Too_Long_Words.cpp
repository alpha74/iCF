// Way Too Long Words
// https://codeforces.com/problemset/submit
// Aman Kumar

/*
	INSIGHT:
		- See code
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
	string s ;
	cin >> s ;
	
	if( s.length() <= 10 )
		cout << s << "\n" ;
	else
		cout << s[0] << s.length() -2 << s[s.length()-1] << "\n" ;
	
}
