#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long sum=0,curr_sum=0;
    for(int i=0;i<n;i++){
        curr_sum+=arr[i];
        sum=max(sum,curr_sum);
        if(curr_sum<0){curr_sum=0;}
    }
    return sum;
}
