void print_last_lines(char *str, int n) 
{ 
    if (n <= 0) 
    return; 
    char *target_pos = NULL;
    target_pos = strrchr(str, DELIM); 
    if (target_pos == NULL) 
    { 
        cout << "ERROR: string doesn't contain '\\n' character\n"; 
        return; 
    } 
    while (cnt < n) 
    { 
        while (str < target_pos && *target_pos != DELIM) 
            --target_pos; 
        if (*target_pos == DELIM) 
            --target_pos, ++cnt; 
        else
            break; 
    } 
    if (str < target_pos) 
        target_pos += 2; 
    cout << target_pos << endl; 
} 
  
