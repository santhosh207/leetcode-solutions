class Solution {
public:
    void reverseString(vector<char>& s) {
        int a=0,e=s.size()-1;
        while(a<e){
            swap(s[a++],s[e--]);
        }
    
    }
};
