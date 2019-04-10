#include <stdio.h>

// define functions  // CHECK ISSPACE function
//function prototype for encrypting rotation cypher
char encryptRotate (char *input, int k, unsigned long int str_len) ;
//function prototype for decrypting rotation cypher 
//char unencryptRotate (char input, int k)
//function prototype for encrypting sub cypher
//char encryptSub (chr input, int k)
//function prototype for decrypting sub cypher 
//char unencryptSub (chr input, int k)
//extra comments
int main() {
    
    char input[] = "Hello I'm writing ___ A TesT S^^tring" ;
    printf("message: %s\n", input);
    unsigned long int str_len = (sizeof(input)/sizeof(char));
    encryptRotate(input, 20, str_len);
    printf("Output: \n");
    for (int j = 0; j < (sizeof(input)/sizeof(char)); j++) {
        printf("%c", input[j]);
    
    }

  // printf("Please enter an option")
  // scanf () //send to correct function
  // print("please enter message")
  // scanf() //read input message 
                      
 }      



//function definition for encrypting rotation cypher
char encryptRotate (char *input, int k, unsigned long int str_len) {
    int i = 0 ; //counter
    
    printf("Input is %lu chars long\n", str_len);
    for (i = 0 ; i < str_len; i++) {
            
         //Convert LC to UC 
        if (input[i] > 96 && input[i] < 123) {
            printf("Input is LC: %c\n", input[i]);
            input[i] = input[i] - 32; 
            printf("Converted to UC: %c\n", input[i]);
        }


        //Use the encrypt function on UC letters
        if (input[i] > 64 && input[i] < 91) {
            printf("About to encrypt: %c %d\n", input[i], input[i]);
            input[i] = ((((int)input[i])+k)-65)%26; 
            input[i] += 65 ;
            printf("Encrypted value: %c\n", input[i]);
        }
         
               
        //printf("About to encrypt: %c %d\n", input[], input[]);
        //input[i] = (((int)input[i])+k)%90;          
     }
}
         
//function definition for decrypting rotation cypher 
//function definition for encrypting sub cypher
//function definition for decrypting sub cypher 