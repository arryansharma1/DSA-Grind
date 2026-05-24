class Solution {
public:
    string reverseVowels(string s) {
        int i,j,n;
        char temp;
        n=s.size();
        i=0;
        j=n-1;
        while(i<j)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U')
                {
                    temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                    i++;
                    j--;
                }
            }
            if((s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') && (s[j]!='a' && s[j]!='e' && s[j]!='i' && s[j]!='o' && s[j]!='u' && s[j]!='A' && s[j]!='E' && s[j]!='I' && s[j]!='O' && s[j]!='U'))
            {
                j--;
            }
            if((s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U') && (s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U'))
            {
                i++;
            }
            if((s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U') && (s[j]!='a' && s[j]!='e' && s[j]!='i' && s[j]!='o' && s[j]!='u' && s[j]!='A' && s[j]!='E' && s[j]!='I' && s[j]!='O' && s[j]!='U'))
            {
                i++;
                j--;
            }
        }
        return s;
    }
};