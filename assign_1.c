#include <stdio.h>

// define functions  // CHECK ISSPACE function
//function prototype for encrypting rotation cypher
 char encryptRotate (char *input, int rotKey, unsigned long int strLen) ;
//function prototype for decrypting rotation cypher 
 //char decryptRotate (char *input, int k, unsigned long int strLen ) ;
//function prototype for encrypting sub cypher
 //char encryptSub (char *input, char *k, unsigned long int strLen);
//function prototype for decrypting sub cypher 
 //char decryptSub (char *input, char *k, unsigned long int strLen ) ;
//extra comments

int main() {
    
    
    
    //RUNNING CODE EXAMPLE FOR USE IN ALL FOUR FUNCTIONS
    char encChoice = 1 ;
    char input[] = "TEsT STrInG" ;
    int rotKey = 1 ;
    //char subKey[] = "QWERTYUIOPASDFGHJKLZXCBNM" ;
    printf("message: %s\n", input);
    unsigned long int strLen = (sizeof(input)/sizeof(char));    
    printf("Output: \n");
    
    //for (int j = 0; j < (sizeof(input)/sizeof(char)); j++) {
        //printf("%c", input[j]);
    

   
//printf("Please enter an option\n 1)Encrypt a rotation cypher\n 2)Decrypt a roatation cypher\n 3)Encrypt a substituion cypher\n 4)Decrypt a substituition cypher\n       Your choice: %c\n", encChoice) ;
//scanf ("%c\n", &encChoice) ;

switch (encChoice) {
    
        case  1://get inputs and call function for encryptRotate
                //printf("Please enter text to encrypt: %c\n", input[] );
                //scanf ("%c", &input[]) ;
                //printf("Your input: %c", *input[])
                //printf("Please enter rotation key: %d", rotKey) ;
                //scanf("%d", &rotKey) ;
               // how to call functions???????
                printf("Encrypted value: %c\n", encryptRotate( &*input, rotKey, strLen));
                break;
       
       case 2: //get inputs and call function for decryptRotate
                //printf("Please enter text to decrypt: %c\n", input[] );
                //scanf ("%c", &input[]) ;
                //printf("Your input: %c", *input[])
                //printf("Please enter rotation key: %d", rotKey) ;
                //scanf("%d", &rotKey) ;
                //decryptRotate( *input, rotKey, strLen) ; // how to call functions???????
                //break;
        
        case 3: //get inputs and call encryptSub
                //printf("Please enter text to encode: %c\n", input[] );
                //scanf ("%c", &input[]) ;
                //printf("Your input: %c", *input[])
                //printf("Please enter substitutuion key: %d", key[]) ;
                //scanf("%d", &rotKey) ;
                //char encryptSub (char *input, char *k, unsigned long int strLen) ; // how to call functions???????
                //break;
                
        case 4: //get inputs and call decryptSub
                //printf("Please enter text to encode: %c\n", input[] );
                //scanf ("%c", &input[]) ;
                //printf("Your input: %c", *input[])
                //printf("Please enter substitutuion key: %d", key[]) ;
                //scanf("%d", &rotKey) ;
                //char decryptSub (char *input, char *k, unsigned long int strLen) ; // how to call functions???????
                //break;
                
        default:
            printf("The charachter entered is not an option") ;
            
        }
}
//end of main 
    
 
 //DONE FUCNTIONS BELOW ___________________________________________________________________________
 /*
 //function definition for decrypting sub cypher      
char decryptSub (char *input, char *k, unsigned long int strLen ) {    
   int i = 0 ; //counter
        
    printf("Input is %lu chars long\n", strLen) ; // tracking string length 
    for (i = 0 ; i < strLen ; i++) { //loop for every charachter in the string
             
        //Convert LC to UC 
        if (input[i] > 96 && input[i] < 123) {
            printf("Input is LC: %c\n", input[i]) ;
            input[i] = input[i] - 32 ; 
            printf("Converted to UC: %c\n", input[i]) ;
        }
       
       int pos = input[i] - 66 ;
        //Use the decrypt function on the UC letters
        if (input[i] > 64 && input[i] < 91) {
            printf("About to decrypt: %c %d\n", input[i], input[i]) ;
             input[i] = k[pos];
            
            printf("converted value:  %c\n",k[pos]) ;
      
        }     
    }
}
*/
/*
 //function definition for encrypting sub cypher
char encryptSub (char *input, char *k, unsigned long int strLen) { 
    int i = 0 ; //counter
    
    
    printf("Input is %lu chars long\n", strLen) ; // tracking string length 
    for (i = 0 ; i < strLen ; i++) { //loop for every charachter in the string
             
        //Convert LC to UC 
        if (input[i] > 96 && input[i] < 123) {
            printf("Input is LC: %c\n", input[i]) ;
            input[i] = input[i] - 32 ; 
            printf("Converted to UC: %c\n", input[i]) ;
        }
        int pos = input [i] - 65 ;
        //Use the encrypt function on the UC letters
        if (input[i] > 64 && input[i] < 91) {
            printf("About to encrypt: %c %d\n", input[i], input[i]) ;
            input[i] = k[pos];
            
            printf("converted value:  %c\n",k[pos]) ;
        }
    }
}
*/

//function definition for encrypting rotation cypher
char encryptRotate (char *input, int rotKey, unsigned long int strLen) {
    //char input[] ;
    //int rotKey ;      
       
    int i = 0 ; //counter
    
    printf("Input is %lu chars long\n", strLen);
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
            input[i] = ((((int)input[i])+rotKey)-65)%26 ; 
            input[i] += 65 ;
            printf("Encrypted value: %c\n", input[i]) ;
        }          
          
     }
}

/*
//function definition for decrypting rotation cypher
char decryptRotate (char *input, int k, unsigned long int strLen ) {
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
            printf("About to Decrypt: %c %d\n", input[i], input[i]) ;
            input[i] = ((((int)input[i])-k)-65)%26 ; 
            input[i] += 65 ;
            printf("Decrypted value: %c\n", input[i]) ;

        }
    }
}
 */
 





