#include<iostream>
using namespace std;

int reverse(int n){
    int revNum =0;
    while(n != 0){
        int dig = n%10;
       if(revNum > INT16_MAX || revNum  < INT16_MIN){
        return 0;
       }
       revNum =(revNum * 10) +dig;
       n = n/10;
    }

    return revNum;
}

bool palimdrome(int n){
    if(n < 0){
        return false;
    }
    if(n == reverse(n)){
        return true;
    }

    return false;
}



int main(){
cout<<palimdrome(-123)<<endl;
return 0;
}
