#include <stdio.h>

// define functions
//function prototype for encrypting rotation cypher
void encryptRotate (char *input, int k) ;
//function prototype for decrypting rotation cypher 
//char unencryptRotate (char input, int k)
//function prototype for encrypting sub cypher
//char encryptSub (chr input, int k)
//function prototype for decrypting sub cypher 
//char unencryptSub (chr input, int k)
//extra comments
int main() {
    
    char input[] = "TESTING" ;
    printf("message: %s\n", input);
     encryptRotate(input, 4);
    printf("Output: ");
    for (int j = 0; j < 4; j++) {
        printf("%c\n", input[j]);
    }
    printf("\n");

    
    //char retval = encrytpRotate([i], 3);
     
   //messageText = abcdefg
   //rotationAmount = 2
   
  // printf("Please enter an option")
  // scanf () //send to correct function
  // print("please enter message")
  // scanf() //read input message 
    
}

//function definition for encrypting rotation cypher
void encryptRotate (char *input, int k) {
    int i = 0 ; //counter
    //char newLett ; //one letter from message now decrypted
        for (i = 0 ; i < (sizeof(input)/sizeof(char)); i++) {
            
            /* TO DO: Convert LC to UC */
           /*TO DO: Don't encrypt anything that isn't UC */
            //printf("About to encrypt: %c\t%d\n", input[i], input[i]);
        input[i] = (((int)input[i])+k)%90;          
     }
}
         
//function definition for decrypting rotation cypher 
//function definition for encrypting sub cypher
//function definition for decrypting sub cypher 