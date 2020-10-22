#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<char>stk;
    int i,sub=0,mx=0,cur=0,len;
    char s[1000000+5];
    scanf("%s",s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]=='(')
            stk.push(s[i]);
        else if(!stk.empty() && stk.top()=='(' && s[i]==')')
        {
            stk.pop();
            cur+=2;
        }
        else if(!stk.empty())
        {
            stk.push(s[i]);
        }
        if(stk.empty())
        {
            mx=max(mx,cur);
            if(cur!=0)
                sub++;
            cur=0;
        }
    }
    if(sub==0)
        cout << "0" << " " << "1";
    else
    cout << mx << " " << sub;
    return 0;
}
