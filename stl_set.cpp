#include <bits/stdc++.h>
using namespace std;

void op(set<int> s) {
    set<int>:: iterator itr;
    for (itr=s.begin();itr!=s.end();itr++) {
        cout<<*itr<<" ";
    }
}
int main() {
    set<int> s;
    int n,m,x;
    char cmd;
    cin>>n;
    while(n--) {
        s.clear();        
        cin>>m;
        while(m--) {
            cin>>cmd;
            if(cmd=='a'){
                cin>>x;
                s.insert(x);
            }
            if(cmd=='b'){
                op(s);
            }
            if(cmd=='c'){
                cin>>x;
                s.erase(x);
            }
            if(cmd=='d'){
                cin>>x;
                if(s.count(x)!=0){
                	cout<<1<<" ";
				}
                else cout<<-1<<" ";
            }
            if(cmd=='e'){
                cout<<s.size()<<" ";
            }
        }
        cout<<"\n";
    }
}
