#include<iostream>
using namespace std;
int main(){
    int a,b,x;
    cin>>a>>b>>x;
    switch(x){
        case 1:
            cout<<a+b;
            break;
        case 2:
            cout<<a-b;
            break;
        case 3:
            cout<<a*b;
            break;
        case 4:
            cout<<float(a/b);
            break;
        case 5:
            cout<<float(a%b);
            break;
        default:
            cout<<"Invalid operation";
    }
    return 0;
}