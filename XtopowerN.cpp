#include<iostream>
using namespace std;

double mypow(double x,int n){
    long binform = n;
    double ans =1;

    while(binform > 0){
        if(binform % 2 ==1){
          ans *=x;
        }
        x *= x;
        binform /= 2;
    }

   return binform;
}
int main(){
    cout<<mypow(2,3)<<endl;
}
