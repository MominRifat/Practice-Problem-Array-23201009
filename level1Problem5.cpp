// Find Duplicates in an Array
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
    
    int save[n];  
    int index = 0;
    
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
        if(count > 1)
        {
            int alreadySaved = 0;
            for(int k = 0; k < index; k++)
            {
                if(save[k] == arr[i])
                {
                    alreadySaved = 1;
                    break;
                }
            }
            if(alreadySaved == 0)
            {
                save[index] = arr[i];
                index++;
            }
        }
    }
    
    if(index > 0) 
    {
        for(int i = 0; i < index; i++)
        {
            cout << save[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "No duplicates present in the array" << endl;
    }
    
    return 0;
}
