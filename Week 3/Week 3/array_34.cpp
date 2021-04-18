struct Pairminmax(int arr[], int n) 
{    
    int i; 
    if (n % 2 == 0) 
    { 
        if (arr[0] > arr[1])     
        { 
            ma = arr[0]; 
            mi = arr[1]; 
        } 
        else
        { 
            mi = arr[0]; 
            ma = arr[1]; 
        } 
        i = 2; 
    } 
    else
    { 
        mi = arr[0]; 
        ma = arr[0]; 
        i = 1; 
    } 
    while (i < n - 1) 
    {         
        if (arr[i] > arr[i + 1])         
        { 
            if(arr[i] > ma)     
                ma = arr[i]; 
                 
            if(arr[i + 1] < mi)         
                mi = arr[i + 1];     
        } 
        else       
        { 
            if (arr[i + 1] > ma)     
                ma = arr[i + 1]; 
                 
            if (arr[i] < mi)         
                mi = arr[i];     
        i += 2; 
    }         
    cout<<ma<<" "mi; 
} 
