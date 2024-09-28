// Find the occurrence of an integer in the array
// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] == x)
        {
            count++;
        }
    }
    if(count != 0)
    {
        cout << count << endl;
    }
    else
    {
        cout << x << " " << "is not present in the given array." << endl;
    }
    return 0;
}
