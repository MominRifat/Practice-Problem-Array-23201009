// Wave Array
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
    
    for(int i = 0; i < n; i+=2)
    {
        if(i > 0 && arr[i-1] > arr[i])
        {
            swap(arr[i], arr[i-1]);
        }

        if(i < n-1 && arr[i] < arr[i+1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
