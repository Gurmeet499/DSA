
int binarysearch(vector<int> arr,int key){

    int start = arr[0];
    int end = arr.size()-1;

    while(start <= end){
        int mid = start + (end - start) /2;

        if(key > arr[mid]){
        start = mid +1;
        }
       else if(key < arr[mid]){
        end = mid -1;
       }

       else{
       return mid;
    }
    }
    return -1;
    
}
