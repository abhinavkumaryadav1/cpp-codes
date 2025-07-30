//  class TreeNode
//     {
//     public:
//         int data;
//         TreeNode *left, *right;
//         TreeNode() : data(0), left(NULL), right(NULL) {}
//         TreeNode(int x) : data(x), left(NULL), right(NULL) {}
//         TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
//     };


void inorder(TreeNode *root, vector<int>& in)
{
    if(root==NULL) return ;
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}

void convertToLL(TreeNode *root , TreeNode* &headLL , TreeNode* &prevnode)
{
    if(root==NULL) return ;

    convertToLL(root->left,headLL,prevnode);

    if(prevnode==NULL)
    {
        headLL = root;
    }
    else{

        prevnode->right = root;
        root->left = prevnode;
     }

     prevnode = root;

     convertToLL(root->right,headLL,prevnode);   
}

TreeNode* mergeLL(TreeNode* & head1 , TreeNode* & head2)
{

    TreeNode* head = NULL;
    TreeNode* tail = NULL;

    while(head1!=NULL && head2 != NULL)
    {

        if(head1->data < head2->data)
        {
            if(head == NULL)
            {
                head = head1;
                tail = head1;
                head1= head1->right;
            }

            else{
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1= head1->right;
            }

        }
        else{
            if(head == NULL)
            {
                head = head2;
                tail = head2;
                head2= head2->right;
            }
            else{
                tail->right = head2;
                head2->left = tail;
                tail = head2;
                head2= head2->right; 
            }
        }


    }

    while(head1!=NULL)
    {
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1= head1->right;   
    }
    while(head2!=NULL)
    {
                tail->right = head2;
                head2->left = tail;
                tail = head2;
                head2= head2->right;    
    }

    return head;


}

vector<int> bstfromhead(TreeNode* & head)
{
    vector<int> result;
    TreeNode* current = head; 

    while (current != NULL) {
        result.push_back(current->data); 
        current = current->right;        
    }

    return result;
}


vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
//     vector<int> ans;
//     vector<int> in1;
//     vector<int> in2;
//     inorder(root1,in1);
//     inorder(root2,in2);
//     int i=0;
//     int j=0;
//     int k=0;

//     while(i<in1.size() && j<in2.size())
//     {
//         if(in1[i]<in2[j])
//         {
// ans.push_back(in1[i++]);             
//         }

//         else
//         {
//             ans.push_back(in2[j++]);
//         }
//     }

//     while(i<in1.size())
//     {
//         ans.push_back(in1[i++]);
//     }
//     while(j<in2.size())
//     {
//         ans.push_back(in2[j++]);
//     }

//     return ans;
//optimised approch iff you made a bst out of it but in this case vector so not optimal sc:(O(n+m))
TreeNode* headLL1 = NULL;
TreeNode* prevnode1 = NULL;
TreeNode* headLL2 = NULL;
TreeNode* prevnode2 = NULL;
convertToLL(root1 , headLL1 , prevnode1);
convertToLL(root2 , headLL2 , prevnode2);
TreeNode* Headmain= mergeLL( headLL1 , headLL2);
return bstfromhead (Headmain); //using vector of size(n+m);
//most optimised solution iff you made a bst out of it but in this case vector so not optimal sc:(O(n+m))

}