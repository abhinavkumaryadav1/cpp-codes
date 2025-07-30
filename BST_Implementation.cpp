#include<iostream>
using namespace std;
#include<queue>
#include<vector>

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};

node* insertIntoBST(node* &root, int data)
{
    if(root==NULL)
    {
        root=new node(data);
        return root;
    }

    if(data>root->data )
   {
    root->right = insertIntoBST(root->right,data);
   }
    else 
    {
        root->left = insertIntoBST(root->left,data);
    }

    return root;
}

node* minVal(node* root) {
    if(root == NULL) return NULL;

    node* temp = root;
    while(temp->left != NULL) {
        temp = temp->left;
    }
    return temp;
}


node* deleteIntoBST(node* &root, int prune)
{

    if(root==NULL) return root;
      
    if(root->data==prune)
    {

        //case I:

        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        //case II:
        //left child:

        if(root->left != NULL && root->right == NULL)
        {
            node* temp =root->left;
            delete root;
            return temp;
        }

        //right child:

        else if(root->left == NULL && root->right != NULL)
        {
            node* temp =root->right;
            delete root;
            return temp;
        }


        //case III:

        if(root->left != NULL && root->right != NULL)
        {
             int mini = minVal(root->right)->data;
             root->data= mini;
             root->right = deleteIntoBST(root->right,mini);
             return root;
        }

        



    }

    else if(root->data >prune)
    {
        root->left=deleteIntoBST(root->left,prune);
        return root;  
    }

    else 
    {
        root->right = deleteIntoBST(root->right,prune);
        return root;
    }

}


void takeinput(node* &root)
{

    int data;
    cin>>data;
    while(data!=-1)
    {
        cout<<"enter data or press -1 to exit"<<endl;
       root=  insertIntoBST(root,data);
        cin>>data;
    }

}

void levelOrder(node* root)
{

   queue<node*> q;
   q.push(root);
   q.push(NULL);


   while(!q.empty())
   {
     
      node* temp = q.front();
      q.pop();

      if(temp==NULL)
      {
         cout<<endl;
         if(!q.empty()) q.push(NULL);
      }
else{
         cout<<" "<<temp->data;

      if(temp->left) q.push(temp->left);
      if(temp->right) q.push(temp->right);
}


   }

}


vector<int> inorderTraversal(node* root , vector<int> &res)
{
       

if (root != NULL) 
        {
            inorderTraversal(root->left, res);
            res.push_back(root->data);
           inorderTraversal(root->right, res);
        }

        return res;
}

vector<int> preorderTraversal(node* root , vector<int> &res)
{
       

if (root != NULL) 
        {
           res.push_back(root->data);
            preorderTraversal(root->left, res);
           preorderTraversal(root->right, res);
        }

        return res;
}

vector<int> postorderTraversal(node* root , vector<int> &res)
{
       

if (root != NULL) 
        {
            postorderTraversal(root->left, res);
            postorderTraversal(root->right, res);
            res.push_back(root->data);
        }

        return res;
}


int main()
 { 

vector<int> res1;
vector<int> res2;
vector<int> res3;
node* root= NULL;

cout<<"enter root"<<endl;

takeinput(root);
cout<<"printing level order traversal of binary search tree"<<endl;
levelOrder(root);

cout<<"printing in-order order traversal of binary search tree"<<endl;
inorderTraversal(root,res1);
for(int val : res1) {
      cout << val << " ";
   }cout<<endl;

cout<<"printing pre-order traversal of binary search tree"<<endl;
preorderTraversal(root,res2);
for(int val : res2) {
   cout << val << " ";
}cout<<endl;

cout<<"printing post-order traversal of binary search tree"<<endl;
postorderTraversal(root,res3); 
   for(int val : res3) {
        cout << val << " ";
    }

//deletion
cout<<endl<<endl<<"after deletion"<<endl<<endl;

root = deleteIntoBST(root,50); // for tree 50 20 70 10 30 90 110 
   
cout<<"printing level order traversal of binary search tree"<<endl;
levelOrder(root);

res1.clear();
cout<<"printing in-order order traversal of binary search tree"<<endl;
inorderTraversal(root,res1);
for(int val : res1) {
      cout << val << " ";
   }cout<<endl;

res2.clear();
cout<<"printing pre-order traversal of binary search tree"<<endl;
preorderTraversal(root,res2);
for(int val : res2) {
   cout << val << " ";
}cout<<endl;

res3.clear();
cout<<"printing post-order traversal of binary search tree"<<endl;
postorderTraversal(root,res3);
   for(int val : res3) {
        cout << val << " ";
    }
    
return 0;
}