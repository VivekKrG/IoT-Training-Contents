#include <SPI.h>        // RC522 Module uses SPI protocol
#include <MFRC522.h>
#include <EEPROM.h> 

#define SS_PIN D4
#define RST_PIN D3  
byte readCard[4]; 
byte correct[]={0xF5,0x3A,0xDB,0x61};
MFRC522 mfrc522(SS_PIN, RST_PIN);
void setup() {

  Serial.begin(9600);  // Initialize serial communications with PC
  SPI.begin();           // MFRC522 Hardware uses SPI protocol
  mfrc522.PCD_Init();    // Initialize MFRC522 Hardware///RFID module

  Serial.println(F("Access Control Example v0.1"));
}

void loop() {
if ( mfrc522.PICC_IsNewCardPresent()) {
    if ( mfrc522.PICC_ReadCardSerial()) {  
        Serial.println(F("Scanned PICC's UID:"));
        for ( uint8_t i = 0; i < 4; i++) {
          readCard[i] = mfrc522.uid.uidByte[i];
          Serial.print(readCard[i],HEX);
        }
        uint8_t j;
        for(j=0; j<4; j++){
          if ( (readCard[j])!= (correct[j])){
            break;
          }
        }
        if (j==4){
          Serial.println(F("Access...."));
        }
        else{
          Serial.println(F("Denied..."));
          }
    } 
        
  Serial.println("");
  mfrc522.PICC_HaltA();  
  }
  }
  

