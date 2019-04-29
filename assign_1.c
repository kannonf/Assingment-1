/*Kannon Ford C3163911
    ENGG1003 programming assingment 1, encryption and decryption of text using a rotation and substittuion cypher.
 
    Enter a value for the type of encyption/decryption wanted as varialble encChoice
        1)Encrypt a rotation cypher
        2)Decrypt a roatation cypher
        3)Encrypt a substituion cypher
        4)Decrypt a substituition cypher
    Enter the rotation key or the Substition key required in hard coded area, and set the unused key to 0 or comment it out
    Run program to see the encrypted/decrypted message
*/

#include <stdio.h>

// define functions for all four types of encryption/decryption
/* char is used for easy comparison to the ASCII table, int is used for simplicity in the rotation key which is between 0 and 26 
   the unsinged long int format for the string Length was found using agoogle search and demonstartor help to help defien the 
   length of the strings being input for encryption/decryption */
  
//function prototype for encrypting rotation cypher
 char encryptRotate (char *input, int rotKey, unsigned long int strLen) ;
//function prototype for decrypting rotation cypher 
 char decryptRotate (char *input, int rotKey, unsigned long int strLen ) ;
//function prototype for encrypting sub cypher
 char encryptSub (char *input, char *subKey, unsigned long int strLen);
//function prototype for decrypting sub cypher 
 char decryptSub (char *input, char *subKey, unsigned long int strLen ) ;


int main() {
      
    //Hard coding examples used for functions for testing and final as couldnt get che user interface working//
    //Please enter inputs and keys below
    char encChoice = 4 ; //choice of type of encryption/decryption wanted, see header
    char input[] = "TeS^t @ St r&ing 69 " ; //text to be enccrypted/decrypted
    int rotKey = 1 ; //rotation Key for function options 1 & 2 
    char subKey[] = "QWERTYUIOPASDFGHJKLZXCBNM" ; //substitution key for function options 3 & 4
       
    unsigned long int strLen = (sizeof(input)/sizeof(char)); // variable to get string length for the fucntions to use    
    
 /* Attempted user interface, couldnt work out how to add inputs on che 
 
printf("Please enter an option\n 1)Encrypt a rotation cypher\n 2)Decrypt a roatation cypher\n 3)Encrypt a substituion cypher\n 4)Decrypt a substituition cypher\n Your choice:  \n", encChoice) ;
scanf ("%c\n", &encChoice) ;
*/


switch (encChoice) { // switch statements to choose which functions to run
    
        case  1://get inputs and call function for encryptRotate (unable to get full user interface working in che)
                //printf("Please enter text to encrypt: %c\n", input[1024] );
                //scanf ("%c", &input[1024]) ;
                //printf("Your input: %c", input[1024]) ;
                //printf("Please enter rotation key: %d", rotKey) ;
                //scanf("%d", &rotKey) ;
                printf("\nencryption finised", encryptRotate( &*input, rotKey, strLen));
                break ;
       
       case 2:  //get inputs and call function for decryptRotate (unable to get full user interface working in che)
                //printf("Please enter text to decrypt: %c\n", input[1024] );
                //scanf ("%c", &input[1024]) ;
                //printf("Your input: %c", input[1024]) ;
                //printf("Please enter rotation key: %d", rotKey) ;
                //scanf("%d", &rotKey) ;
                printf("\ndecryption finised", decryptRotate( &*input, rotKey, strLen));
                break ; 
        
        case 3: //get inputs and call encryptSub (unable to get full user interface working in che)
                //printf("Please enter text to encode: %c\n", input[1024] );
                //scanf ("%c", &input[1024]) ;
                //printf("Your input: %c", input[1024]) ;
                //printf("Please enter substitutuion key: %d", subKey[1024]) ;
                //scanf("%d", &rotKey) ;
                printf("\nencryption finished", encryptSub (&*input, &*subKey, strLen)) ;
                break ;
                
        case 4: //get inputs and call decryptSub (unable to get full user interface working in che)
                //printf("Please enter text to encode: %c\n", input[1024] ) ;
                //scanf ("%c", &input[1024]) ;
                //printf("Your input: %c", input[1024]) ;
                //printf("Please enter substitutuion key: %d", subKey[1024]) ;
                //scanf("%d", &rotKey) ;
                printf("\ndecryption finished" , decryptSub (&*input, &*subKey, strLen)) ;
                break ;
                
        default:
            printf("The charachter entered is not an option") ;
            
        } 
}
//end of main 
    
 
 //DONE FUCNTIONS BELOW ___________________________________________________________________________
 
 //function definition for decrypting sub cypher    
char decryptSub (char *input, char *subKey, unsigned long int strLen ) {    
   int i = 0 ; //counter
        
   // printf("Input is %lu chars long\n", strLen) ; // tracking string length 
    for (i = 0 ; i < strLen ; i++) { //loop for every charachter in the string
             
        //Convert Lower Case to Upper Case using char values and ASCII table
        if (input[i] > 96 && input[i] < 123) {
            //printf("Input is LC: %c\n", input[i]) ;
            input[i] = input[i] - 32 ; 
            //printf("Converted to UC: %c\n", input[i]) ;
        }
       
       int pos = input[i] - 66 ;
        //Use the decrypt function on the Upper Case letters by using the ASCII table locations 
        if (input[i] > 64 && input[i] < 91) {
           // printf("About to decrypt: %c %d\n", input[i], input[i]) ;
             input[i] = subKey[pos];
            
            printf("%c",subKey[pos+1]) ;
      
        }     
    }
}

 //function definition for encrypting sub cypher
char encryptSub (char *input, char *subKey, unsigned long int strLen) { 
    int i = 0 ; //counter
    
    
    printf("Input is %lu chars long\n", strLen) ; // tracking string length 
    for (i = 0 ; i < strLen ; i++) { //loop for every charachter in the string
             
         //Convert Lower Case to Upper Case using char values and ASCII table
        if (input[i] > 96 && input[i] < 123) {
            //printf("Input is LC: %c\n", input[i]) ;
            input[i] = input[i] - 32 ; 
            //printf("Converted to UC: %c\n", input[i]) ;
        }
        int pos = input [i] - 65 ;
         //Use the encrypt function on the Upper Case letters by using the ASCII table locations 
        if (input[i] > 64 && input[i] < 91) {
            //printf("About to encrypt: %c %d\n", input[i], input[i]) ;
            input[i] = subKey[pos];
            printf("%c", subKey[pos]) ;
        }
    }
}


//function definition for encrypting rotation cypher
char encryptRotate (char *input, int rotKey, unsigned long int strLen) {
    int i = 0 ; //counter
    
    //printf("Input is %lu chars long\n", strLen);
    for (i = 0 ; i < strLen ; i++) {
            
         //Convert Lower Case to Upper Case using char values and ASCII table
        if (input[i] > 96 && input[i] < 123) {
            //printf("Input is LC: %c\n", input[i]) ;
            input[i] = input[i] - 32 ; 
            //printf("Converted to UC: %c\n", input[i]) ;
        }


        //Use the decrypt function on Upper Case letters by using the ASCII table locations 
        if (input[i] > 64 && input[i] < 91) {
            //printf("About to encrypt: %c %d\n", input[i], input[i]) ;
            input[i] = ((((int)input[i])+rotKey)-65)%26 ; 
            input[i] += 65 ;
            printf("%c", input[i]) ;
        }          
          
     }
}


//function definition for decrypting rotation cypher
char decryptRotate (char *input, int k, unsigned long int strLen ) {
    int i = 0 ; //counter
    
    //printf("Input is %lu chars long\n", strLen) ; // tracking string length 
    for (i = 0 ; i < strLen ; i++) {
        
         //Convert Lower Case to Upper Case using char values and ASCII table
        if (input[i] > 96 && input[i] < 123) {
            //printf("Input is LC: %c\n", input[i]) ;
            input[i] = input[i] - 32; 
            //printf("Converted to UC: %c\n", input[i]) ;
        }


       //Use the decrypt function on Upper Case letters by using the ASCII table locations
        if (input[i] > 64 && input[i] < 91) {
            //printf("About to Decrypt: %c %d\n", input[i], input[i]) ;
            input[i] = ((((int)input[i])-k)-65)%26 ; 
            input[i] += 65 ;
            printf("%c", input[i]) ;

        }
    }
}
 
 





