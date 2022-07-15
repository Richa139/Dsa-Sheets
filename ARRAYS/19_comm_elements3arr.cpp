vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            vector<int>ans;
            int i=0,j=0,k=0;
            while(i<n1 && j<n2 && k<n3){
                if(a[i]==b[j] && b[j]==c[k]){
                    ans.push_back(a[i]);
                    i++;
                    j++;
                    k++;
                }
                else if(a[i]<b[j]){
                    i++;
                }
                else if(b[j]<c[k]){
                    j++;
                }
                else{
                    k++;
                }
            }
            set<int>s;
            for(int i=0;i<ans.size();i++){
                s.insert(ans[i]);
            }
            ans.clear();
            for (auto itr = s.begin(); itr != s.end(); itr++) { 
              ans.push_back(*itr);
    }
            return ans;
        }

// 2nd
vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            vector<int>ans;
            int i=0,j=0,k=0;
            int last=INT_MIN;
            while(i<n1 && j<n2 && k<n3){
                if(a[i]==b[j] && b[j]==c[k] && a[i]!=last){
                    ans.push_back(a[i]);
                    last=a[i];
                    i++;
                    j++;
                    k++;
                }
                else if(a[i]<b[j]){
                    i++;
                }
                else if(b[j]<c[k]){
                    j++;
                }
                else{
                    k++;
                }
            
    }
            return ans;
  
//   t.c=O(n+m+l)
//     s.c=O(1)
