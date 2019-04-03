#include <stdio.h>

// define functions
//function prototype for encrypting rotation cypher
char encryptRotate (char input, int k) ;
//function prototype for decrypting rotation cypher 
//function prototype for encrypting sub cypher
//function prototype for decrypting sub cypher 

int main() {
    
   int i ;
    char input[] = "newLett" ;
    printf("message: %s\n", input);
    
     /* FYI: How to tell how many letters there are:
     sizeof(<array_name>)/sizeof(char)
     */
    // char retval = encrytpRotate(message[i], 3);
     
   //messageText = abcdefg
   //rotationAmount = 2
   
  // printf("Please enter an option")
  // scanf () //send to correct function
  // print("please enter message")
  // scanf() //read input message 
    
}

//function definition for encrypting rotation cypher
char encryptRotate (char input, int k) {
    int i ; //counter
    char messLett ; //one letter from message
    char newLett ; //one letter from message now decrypted
        for (i = 0 ; i < (sizeof(input)/sizeof(char)) ; i++) {
        messLett = (messLett+k)%26;
        newLett = messLett ;
                  
     }
    return newLett ; 
    
    
    }
    
         
//function definition for decrypting rotation cypher 
//function definition for encrypting sub cypher
//function definition for decrypting sub cypher 