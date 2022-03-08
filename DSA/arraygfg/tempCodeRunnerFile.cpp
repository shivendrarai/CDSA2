    int count=1;
    for (int i = 0; i < n; i++)
    {
        if(A[i]==A[i+1]){
            count++;
        }
        else{
            cout<<A[i]<<" count  "<<count<<"\n";
            count=1;
        }
    }
    
}