class Solution{
  public:
    int i;
    int tl;
    Node* left(int pre[], int level){
        if(level == tl) return NULL;
        Node *root = new Node(pre[i++]);
        root->left = left(pre, level + 1);
        root->right = left(pre, level + 1);
        return root;
    }
    
    Node* constructBinaryTree(int pre[], int preMirror[], int size)
    {
        i = 0;
        tl = log(size+1)/log(2);
        return left(pre, 0);
    }
};