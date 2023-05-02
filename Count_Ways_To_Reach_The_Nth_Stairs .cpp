/*https://www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_10

*/

#include <bits/stdc++.h> 
using namespace std;

int countDistinctWays(int nStairs) {
    
    //base case
    if(nStairs < 0)
        return 0;

    if(nStairs == 0)
        return 1;

    //recursive call
    int ans = countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
}

//abhi yeh clear nahi hoga 
// yeh basic Recursion wala method yeh
// iss question ko clear karne ke liye hume isme DP ka use karna hoga 