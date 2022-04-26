#include<iostream>
using namespace std;
bool present(int arr[][4],int k,int m,int n)
{
	for(int i=0;i<3;i++)
   {
	   for(int j=0;j<4;j++)
	   {
		   if(arr[i][j]==k)
		     return 1;
	   }
   }
   return 0;
}
int main()
{
   int arr[3][4];
//    int arr1[3][2] ={0,1,2,3,4,5};
//    int arr2[3][2]={ {1,11},
//    {1,111},
//    {1,1111}

//    };
   for(int i=0;i<3;i++)
   {
	   for(int j=0;j<4;j++)
	   {
		   cin>>arr[i][j]; //input as row array
	   }
   }
// for(int i=0;i<3;i++)
//    {
// 	   for(int j=0;j<2;j++)
// 	   {
// 		   cout<<arr2[i][j]<<" "; //input as col array
// 	   }
// 	   cout<<"\n";
//    }
//     for(int i=0;i<4;i++)
//    {
// 	   for(int j=0;j<3;j++)
// 	   {
// 		   cin>>arr[j][i]; //input as col array
// 	   }
//    }
    //printing array
// 	 for(int i=0;i<3;i++)
//    {
// 	   for(int j=0;j<4;j++)
// 	   {
// 		   cout<<arr[i][j]<<" ";
		   
// 	   }
// 	   cout<<"\n";
//    }
   cout<<"enter the element to be found:"<<endl;
   int k;
   cin>>k;
   if(present(arr,k,3,4))
   {
	   cout<<"found"<<endl;
   }
   else
   {
	   cout<<"not present"<<endl;
   }
	
   return 0;
}
