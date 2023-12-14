#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char S1[50]="Halloween";
    char S2[50]="Happy New Year";
    cout<<"Length of S2:"<<strlen(S2)<<endl;//14
    cout<<"Length of S1:"<<strlen(S1)<<endl;//9
    cout<<"Compare S1 & S2:"<<strncmp(S1,S2,2)<<endl;//0
    cout<<"Concatenated Result:"<<strncat(S2,S1,5)<<endl;//S2:Happy New YearHallo
    cout<<"Length of S2:"<<strlen(S2)<<endl;//19
    cout<<"S1:"<<S1<<endl;//Halloween
    cout<<"Copy:"<<strcpy(S1,S2)<<endl;//S1:Happy New YearHallo
    cout<<"Search in S1:"<<strchr(S1,'o')<<endl;//o
    cout<<"Search in S2:"<<strstr(S1,"ll")<<endl;//llo
    cout<<"Merged form: "<<strcat(S1,S2)<<endl;//S1:Happy New YearHalloHappy New YearHallo
    cout<<"S2:"<<S2<<endl;//S2:Happy New YearHallo
}

#include<iostream>
#include<cstring>
using namespace std;
int main(){
   char S1[]="Hello World!";
   cout<<"Length:"<<strlen(S1)<<endl;
}

#include<iostream>
#include<cstring>
using namespace std;
int main(){
   char S1[]="Hello";
   char S2[]="World";
   cout<<"Before S1:"<<S1<<endl;
   cout<<"Before S2:"<<S2<<endl;
   cout<<"Concatenation:"<<strcat(S1,S2)<<endl;
   cout<<"After S1:"<<S1<<endl;
   cout<<"After S2:"<<S2<<endl;
 
}

#include<iostream>
#include<cstring>
using namespace std;
int main(){
   char S1[]="Hello";
   char S2[]="World";
   cout<<"Before S2:"<<S2<<endl;
   cout<<"Concatenation:"<<strcat(S2,S1)<<endl;
   cout<<"After S2:"<<S2<<endl;
   cout<<"After S1:"<<S1<<endl;
 
}

#include<iostream>
#include<cstring>
using namespace std;
int main(){
   char S1[]="Hello";
   char S2[]="World";
   cout<<"Before S1:"<<S1<<endl;
   cout<<"Concatenation:"<<strncat(S1,S2,3)<<endl;
   cout<<"After S1:"<<S1<<endl;
   cout<<"After S2:"<<S2<<endl;
 
}

#include<iostream>
#include<cstring>
using namespace std;
int main(){
   char S1[]="Hello";
   char S2[]="World";
   cout<<"Before S1:"<<S1<<endl;
   cout<<"Copy:"<<strcpy(S1,S2)<<endl;
   cout<<"After S1:"<<S1<<endl;
   cout<<"After S2:"<<S2<<endl;
}

#include<iostream>
#include<cstring>
using namespace std;
int main(){
   char S1[]="Hello";
   char S2[]="World";
   cout<<"Before S1:"<<S1<<endl;
   cout<<"Copy:"<<strncpy(S1,S2,3)<<endl;
   cout<<"After S1:"<<S1<<endl;
}

#include<iostream>
#include<cstring>
using namespace std;
int main(){
   char S1[]="E";
   char S2[]="A";
   cout<<"Comparison:"<<strcmp(S1,S2)<<endl;
}
 

#include<iostream>
#include<cstring>
using namespace std;
int main(){
   char S1[]="A";
   char S2[]="D";
   cout<<"Comparison:"<<strcmp(S1,S2)<<endl;
}

#include<iostream>
#include<cstring>
using namespace std;
int main(){
   char S1[]="A";
   char S2[]="D";
   cout<<"Comparison:"<<strcmp(S2,S1)<<endl;
}

#include<iostream>
#include<cstring>
using namespace std;
int main(){
   char S1[]="A";
   char S2[]="a";
   cout<<"Comparison:"<<strcmp(S2,S1)<<endl;
}

#include<iostream>
#include<cstring>
using namespace std;
int main(){
   char S1[]="AABZ";
   char S2[]="AAEA";
   cout<<"Comparison:"<<strncmp(S2,S1,2)<<endl;
}

#include<iostream>
#include<cstring>
using namespace std;
int main(){
   char S1[]="AABZ";
   char S2[]="AFEA";
   cout<<"Comparison:"<<strncmp(S1,S2,2)<<endl;
}

#include<iostream>
#include<cstring>
using namespace std;
int main(){
   char S1[]="AABZ";
   char S2[]="EFEA";
   cout<<"Comparison:"<<strcmp(S2,S1)<<endl;
   cout<<"Comparison:"<<strncmp(S2,S1,1)<<endl;
}

#include<iostream>
#include<cstring>
using namespace std;
int main(){
   char S1[]="AABZ";
   char S2[]="EFEA";
   cout<<"Comparison:"<<strcmp(S1,S2)<<endl;
   cout<<"Comparison:"<<strncmp(S1,S2,2)<<endl;
}

#include<iostream>
#include<cstring>
using namespace std;
int main(){
   char S1[]="Hello World";
   char S2='o';
   cout<<"Character Search:"<<strchr(S1,'r')<<endl;
   cout<<"Character Search:"<<strchr(S1,S2)<<endl;
}

#include<iostream>
#include<cstring>
using namespace std;
int main(){
   char S1[]="Hello World";
   char S2[]="or";
   cout<<"String Search:"<<strstr(S1,"lo")<<endl;
   cout<<"string Search:"<<strstr(S1,S2)<<endl;
}

#include<iostream>
#include<cstring>
using namespace std;
int main(){
   char S1[]="ABBAB";
   cout<<"String Search:"<<strstr(S1,"BAA")<<endl;
 
}

#include<iostream>
#include<cstring>
using namespace std;
int main(){
   char S1[]="ABBAB";
   cout<<"String Search:"<<strstr(S1,"BA")<<endl;
 
}