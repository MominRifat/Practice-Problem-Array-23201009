// Find the Majority Element in an Array
// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int majorityElement = -1;  
    int required = n / 2;
    
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count > required)
        {
            majorityElement = arr[i];
            break;
        }
    }
    cout << majorityElement << endl; 
    return 0;
}
