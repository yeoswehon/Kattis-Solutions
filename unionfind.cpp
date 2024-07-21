#include <bits/stdc++.h>
#define vi vector<int>
#define sz size()
#define yes cout<<"yes"<<"\n"
#define no cout<<"no"<<"\n"
using namespace std;

class Unionfind{
private:
    vi parent,rank,setSize;
    int numSet;
public:
    Unionfind(int n){
        parent.assign(n+1,0);
        for (int i=1;i<=n;i++) parent[i]=i;
        rank.assign(n+1,0);
        setSize.assign(n+1,1);
        numSet = n;
    }
    int findset(int i) {return (parent[i]==i) ? i: parent[i]=findset(parent[i]);}
    bool isSameSet(int i, int j) {return findset(i)==findset(j);}
    int numDisjointSet(){return numSet;}
    int sizeSet(int i){return setSize[findset(i)];}

    void unionset(int i,int j){
        if (isSameSet(i,j))return;
        int x=findset(i);int y=findset(j);
        if (rank[x]>rank[y])swap(x,y);
        parent[x]=y;
        if (rank[x]==rank[y]) rank[y]++;
        setSize[y]+=setSize[x];
        --numSet;
    }
};

void solve() {
    int n,q;cin>>n>>q;
    Unionfind ok(n);
    for (int i=0;i<q;i++){
        char a;cin>>a;
        int b,c;cin>>b>>c;
        if (a=='?'){
            if (ok.isSameSet(b,c))yes;
            else no;
        }
        else{
            ok.unionset(b,c);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);int t = 1; //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
