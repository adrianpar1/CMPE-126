#include "linkedListStack.h"
#include <stack>

std::string infixtoPostFix(std::string expression);
double evaluatePostFix(std::string expression);

int main(){

std::cout<<evaluatePostFix("2 10 5 * +");
//std::cout<<infixtoPostFix("9*(10/3+4");
  

    return 0;
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0; 
};

std::string infixtoPostFix(std::string expression){
    std::string postfix = "";
    linkedListStack<char> stack;


    for(int i=0;i<expression.length();i++){

        if ((expression[i]!='+') && (expression[i]!='-') && (expression[i]!='*') && (expression[i]!='/') && (expression[i]!=';') && (expression[i]!='(') && (expression[i]!=')')) {
            postfix+=expression[i];
        }

        else if (expression[i]=='('){
            stack.push(expression[i]);
        }

       else if (expression[i]==')'){
            while (stack.top()!='('){
                postfix+=stack.top();
                stack.pop();
            }
            stack.pop();

        }

        else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
            while (!stack.empty() && stack.top() != '(' && precedence(stack.top()) >= precedence(expression[i])) {
                postfix += stack.top();
                stack.pop();
            }
            stack.push(expression[i]);
        }

        else if (expression[i]==';'){
            break;
        }
    }

    while(!stack.empty()){
        postfix+=stack.top();
        stack.pop();
    }

    return postfix;
}



double evaluatePostFix(std::string expression){
    int length=expression.length();
    double answer=0, lhs, rhs;
    linkedListStack<double> stack;
    std::string value="";

    for(int i=0;i<expression.length();i++){
       
    if((expression[i]!=' ') && (expression[i]!='+') && (expression[i]!='-') && (expression[i]!='*') && (expression[i]!='/')){
        while (expression[i]!=' '){
            value+=expression[i];
            i++;
            }
        
        stack.push(stod(value));
        value="";
    }
    

    if ((expression[i]=='+') || (expression[i]=='-') || (expression[i]=='*') || (expression[i]=='/')){   

        lhs = (stack.top());
        stack.pop();

        rhs=(stack.top());
        stack.pop();

        switch(expression[i]){
            case '+':
            answer=lhs+rhs;
            stack.push(answer);
            break;

            case '-':
            answer=lhs-rhs;
            stack.push(answer);
            break;

            case '*':
            answer=lhs*rhs;
            stack.push(answer);
            break;

            case '/':
            answer=lhs/rhs;
            stack.push(answer);
            break;
        } 

    }   
}

while(!stack.empty()){
    stack.pop();
}

    return answer;
}