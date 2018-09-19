#include <iostream>
#include <string>

#include "Vigenere.h"

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
  
  return 0;
}
