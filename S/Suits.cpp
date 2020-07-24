// Suits
// https://codeforces.com/problemset/problem/1271/A
// Aman Kumar

/*
	INSIGHT:
		- See code
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
	int t, s, v, j, c1, c2 ;
	cin >> t >> s >> v >> j >> c1 >> c2 ;
	
	ll maxcost1 = 0, maxcost2 = 0 ;
	// Create copies
	int ct = t, cv = v, cs = s, cj = j ;
	
	
	// Selecting type1 then type2
	int minitem = min( t, j ) ;
	maxcost1 = maxcost1 + minitem * c1 ;
	t -= minitem ;
	j -= minitem ;
	
	minitem = min( s, min( v, j ) ) ;
	maxcost1 = maxcost1 + minitem * c2 ;
	
	// Selecting type2 then type1
	t = ct ;
	v = cv ;
	s = cs ;
	j = cj ;
	
	minitem = min( s, min( v, j ) ) ;
	maxcost2 = maxcost2 + minitem * c2 ;
	s -= minitem ;
	v -= minitem ;
	j -= minitem ;
	
	minitem = min( t, j ) ;
	maxcost2 = maxcost2 + minitem * c1 ;
	
	cout << max( maxcost1, maxcost2 ) << "\n" ;
}
