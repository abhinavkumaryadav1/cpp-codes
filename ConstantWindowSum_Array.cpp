#include<iostream>
using namespace std;
// Function to calculate the sum of a constant window size in an array
int main()
{
    
    int arr[10] = {10,9,8,7,6,5,4,3,2,1};
    int k=4; // Size of the window
    int n = 10; // Size of the array
    int i , j;
    i=0;
    j=k;
    int sum = 0;
    int windowSum = 0;


//first method:-

// while(j<=n)
// {
//     int z=i;
//     windowSum=0;
// while(z<j)
// {
// windowSum=windowSum+arr[z];

// z++;   
// }
// cout<<"the window sum is "<<windowSum<<endl;
// sum = max(windowSum,sum);
//  i++;
//  j++;   
// }  

//second method (optimal)

while (i<k)
{
    windowSum = windowSum+arr[i];
    i++;
}
  sum= max(sum,windowSum);
  i=0;
while(j<n)
{
    windowSum=windowSum-arr[i];
    i++;
    windowSum=windowSum+arr[j];
    j++;

    sum= max(sum,windowSum);  
}



cout<<"the max sum is "<<sum;
    return 0;

}
