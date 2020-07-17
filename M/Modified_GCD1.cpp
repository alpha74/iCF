// Modified GCD1
// https://codeforces.com/gym/276996/problem/B
// Author: Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

// Returns GCD
ll gcd( ll x, ll y )
{
  if( y == 0 )
    return x ;

  return gcd( y, x % y ) ;
}

// Returns LCM
ll lcm( ll x, ll y )
{
  return ( x * y ) / gcd( x, y ) ;
}

int main()
{
  ll a, b ;
  cin >> a >> b ;

  // Calculate gcd
  ll gcd_val = gcd( a, b ) ;
  ll lcm_val = ( a * b ) / gcd_val ;

  set<ll> divisors ;

  divisors.insert( gcd_val ) ;

  for( ll i = 1 ; i <= sqrt(gcd_val) ; i++ )
  {
    if( a % i == 0 && b % i == 0 )
    {
      divisors.insert( i ) ;

      if( (gcd_val/i) != i && b % (gcd_val/i) == 0 && (gcd_val/i) <= gcd_val )
        divisors.insert( gcd_val/i ) ;
    }
  }

  int n ;
  cin >> n ;

  while( n-- )
  {
    ll low, high ;
    cin >> low >> high ;

    // Traverse divisors and find first number in range
    ll ret = -1 ;

    auto iter = divisors.end() ;
    iter-- ;

    for( ; iter != divisors.begin() && ret == -1 ; iter-- )
    {
      if( *iter >= low && *iter <= high )
        ret = *iter ;
    }

    if( ret == -1 && *iter >= low && *iter <= high )
      ret = *iter ;


    cout << ret << "\n" ;
  }
}
