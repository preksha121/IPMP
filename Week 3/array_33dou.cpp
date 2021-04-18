
void fun(char s[], int n)
    {
        //  Base case
        if(n == 2)
            return;
        else
        {
            swap_str(s+n/4, s+n/2, n/4);
            fun(s, n/2);
            fun(s + n/2, n/2);
        }
    }
 
void swap_str(char s1[], char s2[], int n)
{
    for(int i = 0; i < n; i++)
        swap(s1[i], s2[i]);

