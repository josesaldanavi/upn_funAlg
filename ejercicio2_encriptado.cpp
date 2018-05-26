#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	char t[100];
	char abe[]="áéíóúabcdefghijklmnopqrstuwxyzABCDEFGHIJKLMNOPQRSTUWXYZ";
	cout<<"Ingrese un texto: "; gets(t);
	int j;
	for(int i=0;i<sizeof(t);i++){
		j=0;
		while(j<57){

			if(t[i]==abe[j] && (j<28||(j>=31 && j<54))){
				t[i]=abe[j-3];
				j=26;
			}
			if(t[i]==abe[j] && (j>=28 && j<31)){
				if(t[i]=='x')t[i]='u';
				if(t[i]=='y')t[i]='v';
				if(t[i]=='z')t[i]='w';
				j=57;
			}
			if(t[i]==abe[j] && (j>=54 && j<57)){
				if(t[i]=='X')t[i]='U';
				if(t[i]=='Y')t[i]='V';
				if(t[i]=='Z')t[i]='W';
				j=57;
			}
			j++;
		}
	}
	cout<<t;
	return 0;
}

