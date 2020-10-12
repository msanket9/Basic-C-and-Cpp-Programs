#include<iostream>
using namespace std;

class vowels{
char sen[100];
int len;
int vcount;

public: 
void stringinput(void){
int i;
cout<<"Enter a senterce here: ";
cin.getline(sen,100);

for(i=0;sen[i]!='\0';i++)
len=i+1;
}

void stringoutput(void){
cout<<endl;
for(int i=0;i!=len;i++)
cout<<sen[i];

cout<<"\n\nNumber of Vowels: "<<vcount<<endl;

}

void checkv(void){
vcount=0;
for(int i=0;sen[i]!=len;i++){
if(sen[i]=='a' || sen[i]=='A' || sen[i]=='e' || sen[i]=='E' || sen[i]=='i' || sen[i]=='I' || sen[i]=='o' || sen[i]=='O' || sen[i]=='u' || sen[i]=='U')
vcount++;
}
}
};

int main(){
vowels a;

a.stringinput();
a.checkv();
a.stringoutput();

return 0;
}
