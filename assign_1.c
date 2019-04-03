#include <stdio.h>

// define functions
//function prototype for encrypting rotation cypher
char encryptRotate (char *input, int k) ;
//function prototype for decrypting rotation cypher 
//char unencryptRotate (char input, int k)
//function prototype for encrypting sub cypher
//char encryptSub (chr input, int k)
//function prototype for decrypting sub cypher 
//char unencryptSub (chr input, int k)

int main() {
    
    char input[] = "testing" ;
    printf("message: %d\n", *input);
    
    //char retval = encrytpRotate([i], 3);
     
   //messageText = abcdefg
   //rotationAmount = 2
   
  // printf("Please enter an option")
  // scanf () //send to correct function
  // print("please enter message")
  // scanf() //read input message 
    
}

//function definition for encrypting rotation cypher
char encryptRotate (char *input, int k) {
    int i = 0 ; //counter
    char messLett ; //one letter from message
    //char newLett ; //one letter from message now decrypted
        for (i = 0 ; i < (sizeof(input)/sizeof(char)); i++) {
        messLett = (messLett+k)%26 ;
      
                  
     }
    return messLett ; 
    
    
    }
    
         
//function definition for decrypting rotation cypher 
//function definition for encrypting sub cypher
//function definition for decrypting sub cypher 