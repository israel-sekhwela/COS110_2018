#include <iostream>
#include <string>

#include "Vigenere.h"
#include "OneTimePad.h"
#include "SwapScramble.h"
#include "Columnar.h"

using namespace std;
/*
  The following main tests the functionality of various ciphers.

  Use at your own discretion, and feel free to extend and/or modify in any way.

  This file will be overwritten by the automarker if submitted.
 */

void testCipher(Cipher& cipher, const string& text) {
	try {
  	string encoded = cipher.encode(text); 
	  cout << encoded << endl;
  	cout << cipher.decode(encoded) << endl << endl;
  } catch(Exception e) {
  	cout << e.getError() << endl << endl;
  }
}


int main() {
  string shortText="Top Secret";

  string longText="According to Larry Wall, the original author of the Perl programming language, there are three great virtues of a programmer; Laziness, Impatience, and Hubris. Laziness: The quality that makes you go to great effort to reduce overall energy expenditure. It makes you write labor-saving programs that other people will find useful and document what you wrote so you don't have to answer so many questions about it. Impatience: The anger you feel when the computer is being lazy. This makes you write programs that don't just react to your needs, but actually anticipate them. Or at least pretend to. Hubris: The quality that makes you write (and maintain) programs that other people won't want to say bad things about.";
  
  /************** Task 1 ***************/

  cout << "************** Task 1 ***************" << endl;
  Vigenere vig("BANANA");
  testCipher(vig, shortText);
  testCipher(vig, longText);
	try {
  	vig.setCodeword("?");
  } catch(Exception e) {
  	cout << e.getError() << endl << endl;
  }
  
	try {
  	vig.setCodeword("   ");
  } catch(Exception e) {
  	cout << e.getError() << endl << endl;
  }
  
	try {
	  vig.setCodeword("lemon");
	} catch(Exception e) {
  	cout << e.getError() << endl << endl;
  }

  testCipher(vig, shortText);
  testCipher(vig, longText);
  
	try {
	  vig.setCodeword("this-is-not-a-code-you're-looking-for");
  } catch(Exception e) {
  	cout << e.getError() << endl << endl;
  }

  testCipher(vig, shortText);
  testCipher(vig, longText);

  /************** Task 2 ***************/

  cout << "************** Task 2 ***************" << endl;
  OneTimePad pad(1);  
  testCipher(pad, shortText);
  testCipher(pad, longText);
  
  try {
  	pad.setSeed(-1);
  } catch(Exception e) {
  	cout << e.getError() << endl << endl;
  }
  try {  
	  pad.setSeed(2);
  } catch(Exception e) {
  	cout << e.getError() << endl << endl;
  }
  testCipher(pad, shortText);
  testCipher(pad, longText);

  try {  
	  pad.setSeed(9999);
  } catch(Exception e) {
  	cout << e.getError() << endl << endl;
  }
  testCipher(pad, shortText);
  testCipher(pad, longText);

  /************** Task 3 ***************/

  cout << "************** Task 3 ***************" << endl;
  SwapScramble ss;
  testCipher(ss, "program");  
  testCipher(ss, "world");  
  testCipher(ss, "secret");   
  testCipher(ss, "sad world");   
  testCipher(ss, "   a   ");  
  testCipher(ss, shortText);
  testCipher(ss, longText);

  /************** Task 4 ***************/

  cout << "************** Task 4 ***************" << endl;
  Columnar cc("key");   
  testCipher(cc, "   a   ");  
  testCipher(cc, shortText);
  testCipher(cc, longText);	 
  try {
  	cc.setCodeword("bAAA");
  } catch(Exception e) {
  	cout << e.getError() << endl << endl;
  }   
  try {
  	cc.setCodeword("x");
  } catch(Exception e) {
  	cout << e.getError() << endl << endl;
  }   
  try {
  	cc.setCodeword("BANANA");
  } catch(Exception e) {
  	cout << e.getError() << endl << endl;
  }   
  testCipher(cc, shortText);
  testCipher(cc, longText);	 
  
  try {
  	cout << cc.decode(longText) << endl << endl;
  } catch(Exception e) {
  	cout << e.getError() << endl << endl;
  } 
  
  return 0;
}
