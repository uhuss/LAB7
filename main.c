#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[] = "Goodbye"; 
    
    printf("Length: %ld\n", strlen(str1)); //before appending
    printf("copied: %s\n", strcpy(str1, str2));
    printf("-1 or 0 or 1: %d\n", strcmp(str1,str2)); // 0 means same : -1/1 </>
    printf("Length: %s\n", strchr(str2, 'b')); //find first occurance of b
    strcat(str1, str2);  // Append str2 to str1
    printf("Concatenated: %s\n", str1); 
    printf("Length: %ld\n", strlen(str1)); //after appending
    return 0;
}
