void generateNextPalindromeUtil (int num[], int n )
{
    int mid = n/2;
 
    bool leftsmaller = false;
    int i = mid - 1;
    int j = (n % 2)? mid + 1 : mid;
    while (i >= 0 && num[i] == num[j])
        i--,j++;
    if ( i < 0 || num[i] < num[j])
        leftsmaller = true;
    while (i >= 0)
    {
        num[j] = num[i];
        j++;
        i--;
    }
    if (leftsmaller == true)
    {
        int carry = 1;
        i = mid - 1;
        if (n%2 == 1)
        {
            num[mid] += carry;
            carry = num[mid] / 10;
            num[mid] %= 10;
            j = mid + 1;
        }
        else
            j = mid;
        while (i >= 0)
        {
            num[i] += carry;
            carry = num[i] / 10;
            num[i] %= 10;
            num[j++] = num[i--]; 
        }
    }
}
 
