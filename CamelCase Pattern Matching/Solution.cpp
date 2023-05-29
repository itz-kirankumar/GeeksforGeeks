class Solution {
  public:
    struct Trie{
       Trie *arr[26];
       vector<string> str;
       Trie(){
           for(int i=0;i<26;i++)
           arr[i]=nullptr;
           str.clear();
       }
};
void insert(string curr, Trie *root)
{
     for(int i=0;i<curr.size();i++)   
     {
         
         if(curr[i]<'A' || curr[i]>'Z')continue;
         if(root->arr[curr[i]-'A']==nullptr)
         {
             Trie *node = new Trie();
             root->arr[curr[i]-'A']=node;
         }
        //  cout<<curr[i]<<" ";
         root= root->arr[curr[i]-'A'];
         root->str.push_back(curr);
         i++;
         while(i<curr.size() and curr[i]>='a' and curr[i]<='z')
         i++;
         i--;
     }
}
void solve(Trie *root, string pat, vector<string> &ans){
    for(int i=0;i<pat.size();i++)
    {
        if(root!=nullptr and root->arr[pat[i]-'A']!=nullptr)root= root->arr[pat[i]-'A'];
        else return ;
    }
    if(root==nullptr)return;
    ans = root->str;
    
}
    vector<string> CamelCase(int N, vector<string> D, string Pattern) {
        
        Trie *root = new Trie();
        for(int i=0;i<D.size();i++)
        {
            insert(D[i], root);
        }
        vector<string> ans;
        solve(root, Pattern, ans);
        if(ans.size()==0)return {"-1"};
        return ans;
    }
};