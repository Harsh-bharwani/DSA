#include<bits/stdc++.h>
using namespace std;

struct MinHeap{
    vector<int> v;

    MinHeap(){
        v.resize(0);
    }

    int getSize(){
        return v.size();
    }

    int getMin(){
        return v[0];
    }
    
    void insert(int x){
        int i=v.size();
        v.push_back(x);
        while (i>0)
        {
            int parent=(i-1)/2;
            if(v[i]<v[parent]){
                swap(v[i], v[parent]);
                i=parent;
            }
            else break;
        }
    }
    template<typename... harsh>
    void insert(int x, harsh... args){
        insert(x);
        insert(args...);
    }

    void deleteMin(){
        int i=0;
        v[i]=v[v.size()-1];
        v.pop_back();
        int n=v.size();
        while (2*i+1<n)
        {
            int mn=2*i+1;
            if(2*i+2< n && v[2*i+2]<v[mn]) mn=2*i+2;
            if(v[i]>v[mn]){
                swap(v[i], v[mn]);
                i=mn;
            } 
            else break;
        }
    }
    void printMinHeap(){
        int n=v.size();
        for(int i=0;i<n;i++){
            if(i==0) cout<<v[i]<<'\n';
            if(2*i+1<n) cout<<v[2*i+1]<<' ';
            if(2*i+2<n) cout<<v[2*i+2]<<'\n';
        }
    }
};

int main(){
    MinHeap mh;
    // cout<<mh.getSize();
    mh.insert(1,5,7,2,-1,3);
    // cout<<mh.getSize();
    mh.printMinHeap();
}
