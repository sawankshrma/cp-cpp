#include<bits/stdc++.h>
using namespace std;

void prime_factors(int n, vector<int>& vec, map <int , int>& mp){
    int t = n;
    for (int i=2; i*i<=n; i++){
        if (t%i==0) vec.push_back(i);
        while (t%i==0){
            mp[i]++;
            t = t/i;
        }
    }
    // if (t > 1) {  // If t is still a prime number > 1
    //     vec.push_back(t);
    //     mp[t]++;
    // }
}


int main (){
    int n = 49*3; // the number to find the factors
    vector <int> vec; // containing all prime factors
    map <int , int> mp; //containing all frequencies

    prime_factors(n, vec, mp);
    
    // to print all prime factors and the frequencies

    for (int i=0; i<vec.size(); i++){
        cout << vec[i] << "^" << mp[vec[i]] << ", ";
    }

}