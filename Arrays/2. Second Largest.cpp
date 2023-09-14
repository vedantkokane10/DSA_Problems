int print2largest(int a[], int n) {
	    // code here
	    int mx = a[0];
	    for(int i=0;i<n;i++){
	        if(a[i] > mx){
	            mx = a[i];
	        }
	    }
	    int last = -1;
	    for(int i=0;i<n;i++){
	        if(a[i] != mx && a[i] > last){
	            last = a[i];
	        }
	    }
	    return last;
	}
