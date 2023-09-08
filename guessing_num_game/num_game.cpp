#include<iostream>
using namespace std;
int main(){
    int n;
    int x=78, count=0;
    cout<<"guess a number between 1 to 99: ";
    for(int i=1; i<=10;i++){
        cin>>n;
        count=i;
        if(n<x) cout<<"guess a greater number: ";
        else if(n>x) cout<<"guess a smalller number: ";
        else cout<<"You are correct";
        if(n==x)break;
    }
    cout<<endl<<"You won "<<count<<" chance. ";
}