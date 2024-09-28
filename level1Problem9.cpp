// Find the Row with a Maximum Number of 1’s
// Created By Momin_Rifat
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin >> r >> c;
    int arr[r][c];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    int mxCount = 0;
    int index = -1;
    for(int i = 0; i < r; i++)
    {
        int count = 0;
        for(int j = 0; j < c; j++)
        {
            if(arr[i][j] == 1)
            {
                count++;
            }
        }
        if(mxCount < count) 
        {
            mxCount = count;
            index = i;
        }
    }
    cout << index << endl;
    return 0;
}