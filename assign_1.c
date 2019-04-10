#include <stdio.h>

// define functions  // CHECK ISSPACE function
//function prototype for encrypting rotation cypher
//    DONE: char encryptRotate (char *input, int k, unsigned long int strLen) ;
//function prototype for decrypting rotation cypher 
//    DONE: char unencryptRotate (char *input, int k, unsigned long int strLen ) ;
//function prototype for encrypting sub cypher
char encryptSub (chr input, int k)
//function prototype for decrypting sub cypher 
//char unencryptSub (chr input, int k)
//extra comments
int main() {
    
    char input[] = "Hello I'm writing ___ A TesT S^^tring zzzzzzzzzzzzzzzz" ;
    printf("message: %s\n", input);
    unsigned long int strLen = (sizeof(input)/sizeof(char));
    unencryptRotate(input, 1, strLen );                          //middle letter is key fro rotataon cyphers
    printf("Output: \n");
    for (int j = 0; j < (sizeof(input)/sizeof(char)); j++) {
        printf("%c", input[j]);
    
    }

  // printf("Please enter an option")
  // scanf () //send to correct function
  // print("please enter message")
  // scanf() //read input message 
                      
 }      


/* DONE ___________________________________________________________________________
//function definition for encrypting rotation cypher
char encryptRotate (char *input, int k, unsigned long int strLen ) {
    int i = 0 ; //counter
    
    printf("Input is %lu chars long\n", str_len);
    for (i = 0 ; i < strLen ; i++) {
            
        //Convert LC to UC 
        if (input[i] > 96 && input[i] < 123) {
            printf("Input is LC: %c\n", input[i]) ;
            input[i] = input[i] - 32 ; 
            printf("Converted to UC: %c\n", input[i]) ;
        }


        //Use the encrypt function on UC letters
        if (input[i] > 64 && input[i] < 91) {
            printf("About to encrypt: %c %d\n", input[i], input[i]) ;
            input[i] = ((((int)input[i])+k)-65)%26 ; 
            input[i] += 65 ;
            printf("Encrypted value: %c\n", input[i]) ;
        }          
          
     }
}
     
//function definition for decrypting rotation cypher
char unencryptRotate (char *input, int k, unsigned long int strLen ) {
    int i = 0 ; //counter
    
    printf("Input is %lu chars long\n", strLen) ; // tracking string length 
    for (i = 0 ; i < strLen ; i++) {
        
        //Convert LC to UC 
        if (input[i] > 96 && input[i] < 123) {
            printf("Input is LC: %c\n", input[i]) ;
            input[i] = input[i] - 32; 
            printf("Converted to UC: %c\n", input[i]) ;
        }


        //Use the encrypt function on UC letters
        if (input[i] > 64 && input[i] < 91) {
            printf("About to encrypt: %c %d\n", input[i], input[i]) ;
            input[i] = ((((int)input[i])+k)-65)%26 ; 
            input[i] += 65 ;
            printf("Encrypted value: %c\n", input[i]) ;

        }
    }
}
  ________________________________________________________________________________*/ 










//function definition for encrypting sub cypher
//function definition for decrypting sub cypher 