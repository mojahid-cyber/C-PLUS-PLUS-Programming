#include<iostream>
using namespace std;
void swap(int x, int y){
    int temp = x;
    x=y;
    y = temp;
    cout <<"After swap: a = "<< x << " b= " << y << endl;
}
int main(){
    int a,b;
    cout<<"Enter two integers: "<<endl;
    cin>>a>>b;
    cout<<"Before swap: a = "<<a << " b= "<<b<<endl;
    swap(a,b);
    return 0;
}