class Solution {
public:
    string reverseStr(string s, int k) {
        int i,n,j,x=0,y=0;
        char temp;
        n=s.size();
        for(i=0;i<n;i=i+(2*k))
        {
            x=(i+k-1);
            y=i;
            if(x>=n)
            {
                x=n-1;
            }
            while(y<x)
            {
                temp=s[y];
                s[y]=s[x];
                s[x]=temp;
                y++;
                x--;
            }
        }
        return s;
    }
};