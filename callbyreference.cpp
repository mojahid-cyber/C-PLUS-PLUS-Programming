#include<iostream>
using namespace std;
void swap(int*a,int*b){
    int temp = *a;
    *a =*b;
    *b = temp;
}
int main(){
    int x,y;
    cout<<"Enter two integers: "<< endl;
    cin>> x >> y ;
    cout<<"Before swap: a = "<<x << " b= "<< y << endl;
    swap(&x,&y);
    cout <<"After swap: a = "<< x << " b= " << y << endl;
    return 0;
}
