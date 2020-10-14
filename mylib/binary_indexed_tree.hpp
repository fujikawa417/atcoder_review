#ifndef BINARY_INDEXED_TREE
#define BINARY_INDEXED_TREE

#include<iostream>
#include<vector>

using namespace std;

template<typename T> class BIT{
    private:
        T n;
        vector<T> bit;
    public:
        BIT(int _n) : n(_n+1),bit(n,0){}
        
        void add(T i,T x){
            while(i <= n){
                bit[i] += x;
                i += i & -i;
            }
        }

        T sum(T i){
            T sum(0);
            while(i > 0){
                sum += bit[i];
                i -= i & -i;
            }
            return sum;
        }

        T sum(T l,T r){
            return sum(r-1) - sum(l-1);
        }
};

#endif //BINARY_INDEXED_TREE