/*
There is BST given with the root node with the key part as an integer only. You need to find the in-order successor and predecessor of a given key. 
If either predecessor or successor is not found, then set it to NULL.
Note:- In an inorder traversal the number just smaller than the target is the predecessor and the number just greater than the target is the successor. 

Input:
        10
      /   \
     2    11
   /  \ 
  1    5
      /  \
     3    6
      \
       4
key = 8
Output: 
6 10
Explanation: 
In the given BST the inorder predecessor of 8 is 6 and inorder successor of 8 is 10.
*/

void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    
        Node* t1 = root;
        Node* t2 = root;
        int a=-1,b=-1;
        //pre 
        while(t1 != NULL){
            if(key <= t1->key){
                t1 = t1->left;
            }
            else{
                a =t1->key;
                t1 = t1->right;
            }
        }
        // suc
        while(t2 != NULL){
            if(key < t2->key){
                b = t2->key;
                t2 = t2->left;
            }
            else{
                t2 = t2->right;
            }
        }
        pre = new Node(a);
        suc = new Node(b);
      //cout<<a<<" "<<b<<endl;
    }
