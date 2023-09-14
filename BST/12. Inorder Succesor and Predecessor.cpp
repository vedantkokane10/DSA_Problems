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
