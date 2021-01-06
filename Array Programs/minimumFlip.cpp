#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;


void printGroup(bool arr[],int n){

for(int i=1;i<n;i++){

if(arr[i]!=arr[i-1]){
    if(arr[i]!=arr[0]) {
    cout<<"From "<<i<<" to ";
    }
    else{ cout<<(i-1)<<endl;}
}
}

if(arr[n-1]!=arr[0])
cout<<(n-1)<<endl;


}


int main( ){

 int n;
 cout<<"Enter Size of Array"<<endl;
 cin>>n;
 bool arr[n];

cout<<"Enter The Numbers for the array"<<endl;
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }

 printGroup(arr,n);

    
}