// Write a Program to Cyclically Rotate an Array by One
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
    int last_element = arr[n - 1];
 
    for(int i = n - 1; i > 0; i--) 
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last_element;
    
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}