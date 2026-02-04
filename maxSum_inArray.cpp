#include<iostream>
// #include<vector>
using namespace std;
 
// this is the code of find max sum in array using kadane algo, O(N) time
int  MaxSubArray(){
    int n =5;
    int arr[]= {3,-4,5,4,-1,7,-8};
  int maxSum = INT8_MIN;
  int curSum =0;

  for(int i : arr){
    curSum += i;
    maxSum = max(curSum,maxSum);
    if(curSum < 0){
curSum =0;
    }
  } 
    return maxSum;

}

int main(){
cout<<MaxSubArray();
  return 0;
}
