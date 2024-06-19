#include<bits/stdc++.h>
using namespace std;

int dataTypeSize(string str){
    // your code here
        // int or float x=4
        //character s = 1
        // double or long y = 8
        // anything -1
        
        if(str == "Character"){
            return 1;
        }else if(str == "Integer" || str == "Float"){
            return 4;
        }else if(str=="Double" || str=="Long"){
            return 8;
        }else{
            return -1;
        }
}
int main(){
    int t;
    cin>>t;

    while(t--){
        string str;
        cin>>str;

        cout << dataTypeSize(str);
        cout<<"\n";
    }
    return 0;
}