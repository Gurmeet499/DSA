#include<iostream>
using namespace std;


void printdigits(int n){
    while(n != 0){
        int digit = n % 10;
        cout<<digit<<endl;

        n = n/10;
    }
}
void countdigits(int n){
    int count =0;
    while(n != 0){
        int digit = n % 10;
      count++;
        n = n/10;
    }
    cout<<count<<endl;

}

void sumOfdigits(int n){
    int sum =0;
    while(n != 0){
        int digit = n % 10;
       sum += digit;
        n = n/10;
    }
    cout<<sum<<endl;

}

int main(){
 int n = 3568;

 printdigits(n);
 countdigits(n);
 sumOfdigits(n);
 return 0;
}
