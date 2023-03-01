char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    // initialise result array 
    int res[size_r];

    int n1_len = strlen(n1);
    int n2_len = strlen(n2);
  
    // storing the last digit of number 1 in a variable 
    int carry = 0;

    // Initializing indexes of result and numbers to be added 
    int i, j, k = 0; 

    // Traverse from end of both strings 
    while (i >= 0 || j >= 0 || carry) { 
        // computing sum of digits and carry 
        int x = carry; 

        if (i >= 0) {
            x += n1[i] - '0'; 
        }
        
        if (j >= 0) {
            x += n2[j] - '0'; 
        }

        // updating result array and decrementing indices 
        res[k++] = (x % 10); 
        carry = x / 10; 
 
        i --; 
        j --;     
    } 

    // reverse the result array 
    reverse(res, k); 
    
    // Convert the result into string 
    // bring the result into the buffer 
    int index = 0; 
    while (index < k && index < size_r - 1) { 
        r[index] = (res[index] + '0'); 
        index ++; 
    } 
    r[index] = '\0'; 
    return r;
} 
