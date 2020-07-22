// New Year Garland
// https://codeforces.com/problemset/problem/1279/A
// Aman Kumar

/*
	INSIGHT:
		- Yes if: r<=g<=b : b <= r+b+1

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
	vector<int> col(3) ;
	cin >> col[0] >> col[1] >> col[2] ;
	
	sort( col.begin(), col.end() ) ;
	
	if( col[2] > col[0] + col[1] + 1 )
		cout << "No\n" ;
	else
		cout << "Yes\n" ;
}
