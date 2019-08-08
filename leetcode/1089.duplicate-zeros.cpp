class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> v;
        for(int i=0;i<arr.size();i++){
            if(arr.size()==v.size()){
                break;
            }
            if(arr[i]==0){
                v.push_back(arr[i]);
                v.push_back(arr[i]);
            }else{
                v.push_back(arr[i]);
            }
        }
        v.resize(arr.size());
        arr=v;
    }
};
