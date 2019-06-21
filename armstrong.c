#include <stdio.h> 
#include <stdlib.h> /* atoi */ 
  
int power(int x, unsigned int y) 
{ 
    int result=1;
    if (y == 0) 
        return 1; 
   /* if (y % 2 == 0) 
        return power(x, y / 2) * power(x, y / 2); 
    return x * power(x, y / 2) * power(x, y / 2); */
    while (y!= 0)
    {
        result *= x;
        --y;
    }
    return result;
} 
  
int order(int x) 
{ 
    int n = 0; 
    while (x) { 
        n++; 
        x = x / 10; 
    } 
    return n; 
} 
  

int isArmstrong(int x) 
{ 
   
    int n = order(x); 
    int temp = x, sum = 0; 
    while (temp) { 
  
        int r = temp % 10; 
        sum += power(r, n); 
        temp = temp / 10; 
    } 
  
    if (sum == x) 
        return 1; 
    else
        return 0; 
} 
  
// Driver code 
int main(int argc, char* argv[]) 
{ 
  int num, res = 0; 
    if (argc == 1) 
        printf("No command line arguments found.\n"); 
  
    else { 
  
        num = atoi(argv[1]); 
        res = isArmstrong(num); 
        if (res == 0) 
            printf("No\n"); 
        else
            printf("Yes\n"); 
    } 
    return 0; 
}
