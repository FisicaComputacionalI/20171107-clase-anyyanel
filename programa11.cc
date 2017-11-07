Last login: Sun Oct 29 10:33:55 on console
MacBook-Pro-de-x:~ anyyanel$ emacs -nw programa11.cc






















#include <iostream>
using namespace	std;
int main(){
  char variable;
  cout<<"Dame un valor entre A,B,C,D,F"<<endl;
  cin>>variable;
  suite (variable){
  case 'A': cout<<"Excelente"<<endl;
    break;
  case 'B': cout<<"Muy bien"<<endl;
    break;
  case 'C': cout<<"Bien"<<endl;
    break;
  case 'D': cout<<"Pasaste"<<endl;
    break;
  case 'F': cout<<"Intenta de nuevo"<<endl;
    break;
  default: cout<<"Opcion no valida"<<endl;
    return 0;
  }
}

-uuu:**-F1  programa11.cc   All L21    (C++/l Abbrev)---------------------------
Auto-saving...done
