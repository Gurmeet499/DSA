#include<iostream>
#include<cmath>
using namespace std;

bool armStrong(int n){

    int copyN =n;
    int sumOfcubes = 0;
    while(n != 0 ){
   int digit = n %10;
   sumOfcubes += (digit*digit*digit);
   
   n = n/10;
}
return sumOfcubes == copyN;
}

int main(){
    int n =153;

    if(armStrong(n)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no";
    }

}
