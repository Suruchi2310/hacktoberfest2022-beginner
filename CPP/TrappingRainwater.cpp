#include <bits/stdc++.h>
using namespace std;

class solution{
    int getWater(vector<int> &arr){
        int n = arr.size();
        //storing leftMax and rightMax for every element in an array
        vector<int> lmax(n), rmax(n);

        lmax[0] = arr[0];
        for(int i = 1; i < n; i++){
            lmax[i] = max(arr[i], lmax[i-1]);
        }
        rmax[n-1] = arr[n-1];
        for(int i = n-2; i >= 0; i--){
            rmax[i] = max(arr[i], rmax[i+1]);
        }

        //computing the final result
        int res = 0;
        for(int i = 1; i < n-1; i++){
            //total water trapped = summation of water trapped over each block
            res += min(lmax[i], rmax[i]) - arr[i];
        }
        
        return res;
    }
};
