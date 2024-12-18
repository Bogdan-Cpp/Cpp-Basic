#include <iostream>
#include <stack>

void Forward(std::stack<std::string> &istoric, std::stack<std::string> &apps, std::string &rasp);
void emptyCheck(std::stack<std::string> &apps, std::string &rasp);

int main(){
  std::stack<std::string> istoric;
  std::stack<std::string> apps;
  std::string rasp;
      
  std::cout << "Open an app: ";
  std::cin >> rasp;
  apps.push(rasp);

  do{
    emptyCheck(apps, rasp);
    std::cout << "-> " << apps.top() << '\n';
    std::cout << "Undo/Forward: ";
    std::cin >> rasp;

    if(rasp == "undo"){
      istoric.push(apps.top());
      apps.pop();
    }

    if(rasp == "forward"){
      Forward(istoric, apps, rasp);
    }
  }while(rasp != "exit");
    
  system("pause");
  return 0;
}

void Forward(std::stack<std::string> &istoric, std::stack<std::string> &apps, std::string &rasp){
  if(istoric.empty()){
    std::cout << "You'r istoric is empty!\n";

    std::cout << "Open an app: ";
    std::cin >> rasp;
    apps.push(rasp);
  }
  else{
    apps.push(istoric.top());
    istoric.pop();
  }
}

void emptyCheck(std::stack<std::string> &apps, std::string &rasp){
  if(apps.empty()){
    std::cout << "You'r browser is empty!\n";

    std::cout << "Open an app: ";
    std::cin >> rasp;
    apps.push(rasp);
  }
}