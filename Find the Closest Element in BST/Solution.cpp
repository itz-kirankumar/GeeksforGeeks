
class Solution
{   
    int ans;
    public:
    void fun(Node *root,int K){
        if(root==NULL)
        return;
        ans=min(ans,abs(root->data-K));
        if(K<root->data)
        fun(root->left,K);
        else if(K>root->data)
        fun(root->right,K);
        else
        return;
    }
    
    int minDiff(Node *root, int K)
    {
        ans=INT_MAX;
        fun(root,K);
        return ans;
    }
};