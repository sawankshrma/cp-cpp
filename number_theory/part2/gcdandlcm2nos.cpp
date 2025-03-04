#include<bits/stdc++.h>
using namespace std;

int gcd(int x, int y){
    if (y==0) return x;
    else return gcd(y, x%y);
}
int lcm(int t, int nm)
{
    return nm/t;
}

int main (){
    int n = 75, m = 45;// the numbers to find the gcd and lcm
    cout << gcd(max(n, m), min(n, m)) ;
    cout << ", "<< lcm(gcd(max(n, m), min(n, m)),n*m);
    
}