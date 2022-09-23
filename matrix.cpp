#include<iostream>
using namespace std;
int main()
{
	int r,c,a[100][100],b[100][100],diff[100][100],i,j;
	cout<<"enter the number between 1 to 100:";
	cin>>r;
	cout<<"enter th numbers between 1 to 100:";
	cin>>c;
	cout<<"enter the first matrix";
	for(i=0;i<r;i++)
	 for(j=0;j<c;j++)
	 {
	 	cin>>a[i][j];
	 }
	 cout<<"enter the second matrix";
	 for(i=0;i<r;i++)
	  for(j=0;j<c;j++)
	  {
	  	cin>>b[i][j];
	  }
	  for(i=0;i<r;i++)
	   for(j=0;j<c;j++)
	   {
	   	diff[i][j]=a[i][j]-b[i][j];
	   }
	   for(i=0;i<r;i++)
	    for(j=0;j<c;j++)
	    {
	    	cout<<sum[i][j]<<" ";
	    	if(j==c -1)
	    	cout<< endl;
		}
		return 0;
	
}#include <bits/stdc++.h> 
using namespace std;
float mean(float arr[], int n){
    float sum = 0;
    for(int i = 0;i < n; i++)
        sum += arr[i];
    
    return sum/n;
}
float median(float arr[], int n){
    sort(arr, arr + n);
    if(n % 2 == 0)
        return (arr[n/2 - 1] + arr[n/2])/2;
    return arr[n/2];
}
float mode( float arr[], int n){
    sort(arr, arr + n);   
    int max_count = 1, res = arr[0], count = 1; 
    for (int i = 1; i < n; i++) { 
        if (arr[i] == arr[i - 1]) 
            count++; 
        else { 
            if (count > max_count) { 
                max_count = count; 
                res = arr[i - 1]; 
            } 
            count = 1; 
        } 
    } 
    if (count > max_count) 
    { 
        max_count = count; 
        res = arr[n - 1]; 
    } 
    
    return res;
}
int main(){
    int n;
    float arr[50];
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    cout<<"\nMean = "<<mean(arr, n);
    cout<<"\nMedian = "<<median(arr, n);
    cout<<"\nMode = "<<mode(arr, n);
    
    return 0;
}
