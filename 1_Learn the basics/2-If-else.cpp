#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
        string compareNM(int n, int m){

            if(n < m){
                return "lesser";
            } else if(n==m){
                return "equal";
            }else{
                return "greater";
            }
        }
};

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;

        cin >> n >> m;

        solution obj;
        cout << obj.compareNM(n,m)<<"\n";
    }
    return 0;

}