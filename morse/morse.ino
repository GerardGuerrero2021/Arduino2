/******************************************************************************
**                                                                           **
**                              Morse                                        **
**                                                                           **
**                                                                           **
******************************************************************************/

//****** Includes *************************************************************

//****** Variables ************************************************************
const int pin = 9;   // pin for speaker

int note = 1047;
int velocitat = 10;

//****** Setup ****************************************************************
void setup()
{
}

//****** Loop *****************************************************************
void loop()
{
  //G   
  ratlla();
  ratlla();
   punt();
  
  //Espai entre lletres
  espaiL();
  //E
  punt();
  //Espai entre lletres
  espaiL();
  //R
  punt();
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
   //A   
  punt();
  ratlla();
  //Espai entre lletres
  espaiL();
   //R
  punt();
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
  //D
  ratlla();
  punt();
  punt();
 //Espai entre paraules
  espaiP();
   //G  
  ratlla();
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
  //U
  punt();
  punt();
  ratlla();
  //Espai entre lletres
  espaiL();
  //E
  punt();
  
  //Espai entre paraules
  espaiL();
   //R 
   punt();
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
  //R
   punt();
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
  //E
  punt();
  
  //Espai entre paraules
  espaiL();
   //R   
  punt();
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
  //O
  ratlla();
  ratlla();
  ratlla();
  
   //Espai entre lletres
  espaiP();
 
}

//****** Funcions *************************************************************
void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocitat));  
}

void espaiP()  //Espai entre paraules
{   
  delay(6*(1000/velocitat));  
}
