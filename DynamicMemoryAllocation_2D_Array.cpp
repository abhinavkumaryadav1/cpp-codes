#include<iostream>
using namespace std;

int main() 

{

int row;
int col;
cin>>row>>col;

int **arr =  new int* [row]; //Dynamic Memory Allcation for 2D Array

for (int i = 0; i < row; i++)
{
    
    arr[i] = new int[col];  //here we are creating array of column size exactly for row times hence a 2d array(visualise it)
}

//insertion

for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        cin>>arr[i][j];
    }
    
}

//printing 2d array

for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

//for releasing memory / deleting the allocated memory from heap.

for (int i = 0; i < row; i++)
{
    delete [] arr[i];           //fisrt we are freeing the array pointed by the pointer or you can say the rows one by one.
}

delete [] arr; // at last we are freeing all the pointers that are pointed by arr double pointer.






return 0;
}