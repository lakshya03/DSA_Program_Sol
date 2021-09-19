class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int ia= a.size()-1,ib=b.size()-1,c=0;
        while(ia>=0||ib>=0||c==1)
        {
            c+=ia>=0?a[ia--]-'0':0;
            c+=ib>=0?b[ib--]-'0':0;
            res=char(c % 2 + '0')+res;
            c=c/2;
        }
        return res;
    }
};