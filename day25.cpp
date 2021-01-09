#include <stdio.h>

#define cardNum 14222596
#define doorNum 4057428

void encKeyFind(unsigned long encKey[]){
    encKey[0] = ( encKey[0] * doorNum ) % 20201227;
    encKey[1] = ( encKey[1] * cardNum ) % 20201227;
}

void makePubKey(unsigned long pubKey[]){
    pubKey[0] = (pubKey[0] * 7) % 20201227;
    pubKey[1] = (pubKey[1] * 7) % 20201227;
}

int main() {
  unsigned long pubKey[2] = { 1, 1 };
  unsigned long encKey[2] = { 1, 1 };
  int acc = 0;
  while(1) {
    makePubKey(pubKey);
    encKeyFind(encKey);
    if ( pubKey[0] == cardNum ) { break; }
    if ( pubKey[1] == doorNum ) { acc = 1; break; }
  }
  printf("yo dog your key: %lu\n", encKey[acc]);
}