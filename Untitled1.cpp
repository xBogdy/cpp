// ios::eof example
#include <iostream>     // std::cout
#include <fstream>      // std::ifstream
#include <string>
using namespace std; 

bool is_vow(char c) 
{ 
	// this compares vowel with 
	// character 'c' 
	return (c == 'a') || (c == 'e') || 
		(c == 'i') || (c == 'o') || 
		(c == 'u') || (c == 'A') || (c == 'E') || 
		(c == 'I') || (c == 'O') || 
		(c == 'U') ; 
} 

bool is_cons(char c) 
{ 
	// this compares vowel with 
	// character 'c' 
	return (c == 'b') || (c == 'c') || 
		(c == 'd') || (c == 'f') ||    
		(c == 'h')|| (c == 'j') || 
		(c == 'l') || (c == 'n') || 
		(c == 'p') || (c == 'q') || //adauga celelalte consoane + toate consoanele cu majuscula
		(c == 'r') || (c == 'B'); 
}

int findVowels(string str) 
{ 
	int z=0,x=0,v=0;
	// print 1st character 
	printf("%c",str[0]); 
	
	// loop to check for each character 
	for (int i = 1; str[i]; i++) {v=0;
		if(x==1){
			x=0;
			printf("%c",str[i]);
			continue;
		}
		
		// comparison of consecutive characters 
		if ((!is_vow(str[i - 1])) || 
			(!is_vow(str[i]))){
			printf("%c",str[i]);
			v=1;
			}else {
				if(is_vow(str[i-1])){	
			if(is_vow(str[i])){
				z++;
			printf("%c",str[i]);
			printf("%c",'_');
				x=1;
				continue;
				}
			}
		}
		
		if ((!is_cons(str[i - 1])) || 
			(!is_cons(str[i]))){
			if(v==0){
			printf("%c",str[i]);
		}
			}else {
				if(is_cons(str[i-1])){	
			if(is_cons(str[i])){
				z++;
//			printf("%c",str[i]);
			printf("%c",'_');
				x=1;
				continue;
				}
			}
		}
	}
	
return z;
}

int main () {
   
	char propozitia[255];
	cout << "Introduceti textul: ";
    cin >> propozitia;
    
	
	int z = findVowels(propozitia);	
	cout<<"\nNumarul de silabe ="<<z<<endl;
	 cout<<propozitia <<endl;

  return 0;

}
