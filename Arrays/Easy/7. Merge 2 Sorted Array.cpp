// also know as union of two arrays
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n = a.size();
    int m = b.size();
    vector<int>ans;
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(i != 0 && a[i] == a[i-1]){
            i++;
            continue;
        }
        if(j != 0 && b[j] == b[j-1]){
            j++;
            continue;
        }
        if(a[i] < b[j]){
            ans.push_back(a[i]);
            i++;
        }
        else if(a[i] > b[j]){
            ans.push_back(b[j]);
            j++;
        }
        else{
            ans.push_back(b[j]);
            j++;
            i++;
        }
       // k++;
    }

    while(i<n){
        if(i != 0 && a[i] == a[i-1]){
            i++;
            continue;
        }
        ans.push_back(a[i]);
        i++;
      //  k++;
    }

    while(j<m){
        if(j != 0 && b[j] == b[j-1]){
            j++;
            continue;
        }
       ans.push_back(b[j]);
        j++;
       // k++;
    }
    return ans;
}
