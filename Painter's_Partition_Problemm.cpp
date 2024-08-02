//  ##CODING NINJA PLATFOR QUESTION SAME LOGIC AS BOOK ALLOCATION AND IT RUNS (LOGIC CODE)##


// bool ispossible(vector<int> &boards,int m , int mid)
// {

// int stud=1;
// int pagesum=0;

// for (int i = 0; i < boards.size(); i++)
// {
//     if (pagesum+boards[i]<=mid)
//     {
//         pagesum=pagesum+boards[i];
//     }
    
//     else
//     {
//          stud=stud+1;
//         if (stud>m || boards[i]>mid )
//         {
//             return false;
            
//         }
        
//         pagesum=boards[i];
//     }
    
// }
// return true;

// }


// int findLargestMinDistance(vector<int> &boards, int k)
// {
    



// int start=0;
// int sum=0;
// int ans=0;
// for (int i = 0; i < boards.size(); i++)
// {
//     sum=sum+boards[i];
// }
// int end=sum;
// int mid=start+(end-start)/2;
// while(start<=end)
// {
// if (ispossible(boards,k,mid))
// {
//     ans=mid;
//     end=mid-1;
// }

// else
// {
//     start=mid+1;
// }

// mid=start+(end-start)/2;
// }
// return ans;
// }


