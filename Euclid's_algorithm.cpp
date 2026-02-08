#include<iostream>
using namespace std;

int gcd(int a, int b){
    while(a>0 && b> 0){
        if(a>b){
            a = a%b;
        }
        else{
            b = b % a;
        }
    }
    if(a ==0 ) return b;
    return a;

}


//recursion code
int gcdrec(int a,int b){
    //base case
    if(b == 0) return a;
    return gcdrec(b,a % b);
}

// find least common divisor
int lcm(int a, int b){
    int gcd = gcdrec(a,b);
    return (a*b)/gcd;
}


int main(){
  cout<<gcd(20,28)<<endl;

    return 0;

}
