

// first_lastocuurance
// function
vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        int first=-1,last=-1;
        vector<int> ans;
         vector<int> lo;
        int start=0,end=n-1;
        int mid=start+((end-start)/2);
        while(start<=end){
            if(arr[mid]==x){
                first=mid;
                end=mid-1;
            }
            else if(arr[mid]>x){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=start+((end-start)/2);
        }
        ans.push_back(first);
         start=0;
         end=n-1;
         while(start<=end){
            if(arr[mid]==x){
                last=mid;
                start=mid+1;
            }
            else if(arr[mid]>x){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=start+((end-start)/2);
        }
        ans.push_back(last);
        if(first==-1)
        {
            lo.push_back(-1);
            
            return lo;
        }
        else
        {
            return ans;
        }
        
    
    }


    // for total no of occoursnce
    ans=last-first+1