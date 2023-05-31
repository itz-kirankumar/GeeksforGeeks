class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        map<int,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        int a = INT_MAX,b=0;
        for(auto i: m){
            if(i.second<=a && b<i.first){
                a= i.second;
                b= i.first;
            }
        }
        return b;
    }
};
