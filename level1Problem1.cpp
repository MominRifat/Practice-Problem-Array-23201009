// Find the Minimum and Maximum Element in an Array
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

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    cout << "Minimum element is: " << arr[0] << endl;
    cout << "Maximum element is: "<< arr[n - 1] << endl;
    return 0;
}