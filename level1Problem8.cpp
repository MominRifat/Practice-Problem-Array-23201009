// Move All the Negative Elements to One Side of the Array
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
    int posArr[n];
    int negArr[n];
    int posIndex = 0;
    int negIndex = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            negArr[negIndex] = arr[i];
            negIndex++;
        }
        else
        {
            posArr[posIndex] = arr[i];
            posIndex++;
        }
    }
    for(int i = 0; i < negIndex; i++)
    {
        cout << negArr[i] << " ";
    }
    for(int i = 0; i < posIndex; i++)
    {
        cout << posArr[i] << " ";
    }
    return 0;
}