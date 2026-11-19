#include<iostream>
using namespace std;        
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b&&b==c){
        cout<<"Equilateral triangle";
    }
    else if(a==b||b==c||a==c){
        cout<<"Isosceles triangle";
    }
    else if(a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b){
        cout<<"Right angle triangle";
    }
    else{
        cout<<" it is a Scalene triangle";
    }
    return 0;
}