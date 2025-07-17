//binary tree implementation and traversals

#include<iostream>
using namespace std;
#include<queue>
#include<vector>

class node{
public:
   int data;
   node* left;
   node* right;

    node(int d)
    {
      this->data=d;
      this->left=NULL;
      this->right=NULL;
    }


};

node* buildTree(node* root)
{

   cout<<"enter data "<<endl;
   int d;
   cin>>d;
   root = new node(d);

   if(d == -1) 
   {
      return NULL;
   }
 
cout<<"enter data for left of "<<d<<endl;
root->left = buildTree(root->left);

cout<<"enter data for right of"<<d<<endl;
root->right = buildTree(root->right);

return root;

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

   node* root = NULL;

   root = buildTree(root);

   levelOrder(root);
   cout<<"level order"<<endl;

   vector<int> result1;
   vector<int> result2;
   vector<int> result3;
   inorderTraversal(root,result1);
   preorderTraversal(root,result2);
   postorderTraversal(root,result3);
   cout<<"inorder"<<endl;
   
   for(int val : result1) {
      cout << val << " ";
   }
   cout<<endl<<"preorder"<<endl;
   for(int val : result2) {
      cout << val << " ";
   }
   cout<<endl<<"postorder"<<endl;
   for(int val : result3) {
        cout << val << " ";
    }
return 0;
}