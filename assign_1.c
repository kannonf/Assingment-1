#include <stdio.h>

// define functions  // CHECK ISSPACE function
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
     encryptRotate(input, 7);
    printf("Output: ");
    for (int j = 0; j < 7; j++) {
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
        
        //Convert LC to UC 
        switch (*input)
        case 1: (*char > 96 && *char < 123) {
                char = char - 32 ;
                return char ;
                }
            break;
        //Don't encrypt anything that isn't UC 
        case 2:  (*char > 32 && *char < 64 || *char > 91 && *char <97) {
                return 0 ;
                }
            break;
                    
        //use the encrypt function if its an upper case letter
        case 3: (*char > 64 && *char < 91) {
                    //use encrypt function
                }
           break;
       default; printf("unrecognised value entered")
            

//function definition for encrypting rotation cypher
void encryptRotate (char *input, int k) {
    int i = 0 ; //counter
            for (i = 0 ; i < (sizeof(input)/sizeof(char)); i++) {
            
            /*Convert LC to UC 
                if (*char > 96 && *char < 123) {
                    char = char - 32 ;
                    retrun char ;
                }
           
           //Don't encrypt anything that isn't UC 
                if (*char > 32 && *char < 64 || *char > 91 && *char <97) {
                    return 0 ;
                }
                else if (*char > 64 && *char <91 ) {
                    
            //use the encrypt function
                else if (*char > 64 && *char < 91) {
                    //use encrypt function
                }
                
                
        //printf("About to encrypt: %c %d\n", input[i], input[i]);
        //input[i] = (((int)input[i])+k)%90;          
     }
}
         
//function definition for decrypting rotation cypher 
//function definition for encrypting sub cypher
//function definition for decrypting sub cypher 