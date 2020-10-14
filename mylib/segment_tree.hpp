#ifndef SEGMENT_TREE_HPP
#define SEGMENT_TREE_HPP

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

template<typename T> class RMQ{
    private:
        const T INF = numeric_limits<T>::max();
        int n;
        vector<T> dat;
    public:
        RMQ(int n_) : n() , dat(n_ * 4,INF){
            int x = 1;
            while(n_ > x){
                x *= 2;
            }
            n = x;
        }

        void update(T i,T x){
            i += n-1;
            dat[i] = x;
            while(i > 0){
                i = (i-1)/2;
                dat[i] =  min(dat[2*i+1],dat[2*i+2]);
            }
        }

        T segment_subquery(T a,T b,T k,T l,T r){
            if(a >= r || b <= l) return INF;
            else if(a <= l && r <= b) return dat[k];
            else{
                T tx = segment_subquery(a,b,2*k+1,l,(l+r)/2);
                T ty = segment_subquery(a,b,2*k+2,(l+r)/2,r);
                return min(tx,ty);
            }
        }

        T segment_query(T a,T b){
            return segment_subquery(a,b,0,0,n);
        }

        vector<T> data(){
            vector<T> res(n);
            for(int i=n;i < 2*n;i++){
                res[i-n] = dat[i-1];
            }
            return res;
        }
};

#endif //SEGMENT_TREE_HPP