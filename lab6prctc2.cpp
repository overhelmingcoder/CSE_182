#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node*left;
    node*right;

    node(int d)
    {
        data=d;
        left=right=NULL;
    }
};

int height(node*root)
{
    if(root==NULL)
        return 0;

    int lh=1+height(root->left);
    int rh=1+height(root->right);
    return max(lh,rh);
}

int maxDepth(node* root)
{
    if (root == NULL)
        return 0;
    int lh = 1+ maxDepth(root->left);
    if (lh == -1)
        return -1;
    int rh = 1+ maxDepth(root->right);
    if (rh == -1)
        return -1;
    if (abs(lh-rh)>1) // Check for imbalanced condition
        return -1;
    return max(lh,rh);
}

bool isbalanced(node *root)
{
// return 1 if true otherwise return 0
    return maxDepth(root)!=-1;
}



void inorder(node*temp)
{
    if(temp==NULL)
    {
        return;

    }
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}

//sum of left child


/*queue<node*> q;
q.push(root);
int sum=0;

while(!q.empty())
{
    node *temp = q.front();
    q.pop();
    if(temp->left != NULL)
        cout<<temp->data<<" ";
        sum+=q.front();
        q.push(temp->left);

    if(temp->right != NULL)
        q.push(temp->right);


}*/
int BST( struct node*root)
{
      static struct node*prev=NULL;
    if(root!=NULL)
    {
        if(!BST(root->left))
        {
            return 0;
        }
        if(prev!=NULL && root->data<=prev->data)
        {
            return 0;

        }
        prev=root;
        return BST(root->right);
    }
    else
    {
        return 1;
    }

}


int sumleftnodes( node*root)
{
    if(root==NULL)
    {
        return 0;
    }

    int sum = 0;
    if (root->left != NULL)
        sum += root->left->data;


   sum += sumleftnodes(root->left);
    sum += sumleftnodes(root->right);

    return sum;
}




int main()
{
    node*root=new node(50);
    root->left=new node(17);
    root->right=new node(72);
    root->left->left=new node(12);
    root->left->right=new node(23);
    root->right->left=new node(54);
    root->right->right=new node(76);
    root->left->left->left=new node(9);
    root->left->left->right=new node(14);
    root->left->right->right=new node(19);
    root->right->left->right=new node(67);




    //inorder(root);

     int h=height(root);
     cout<<"Height of the following tree : "<<h<<endl;

       cout<<endl;

    int b = isbalanced(root);
    if(b==0)
    {
        cout<<"Tree in not balanced"<<endl;
    }
    else
    {
        cout<<"Tree is balanced"<<endl;
    }
     cout<<endl;

     int k=BST(root);
    if(k==1)
    {
        cout<<"The given tree is BST"<<endl;
    }
    else if(k==0)
    {
        cout<<"The given tree is not BST"<<endl;
    }
     cout<<endl;


    int s=sumleftnodes(root);
   cout<<"Sum of the left child: "<<s<<endl;


    return 0;

}
