	
#include "Calculator.h"

    Calculator::Calculator(){
        result=0;
    }

	Calculator::~Calculator(){
    }

	void Calculator::add(double value){
        stack.push(value);
        prev.push(value);
        history.push("Add ");
        history.push(std::to_string(value));

        if(!stack.empty()){
            result=stack.pop()+stack.pop();
        }
        stack.push(result);  
    }

	void Calculator::subtract(double value){
        stack.push(value);
        prev.push(-value);
        history.push("Subtract ");
        history.push(std::to_string(value));


        if(!stack.empty()){
            result=stack.pop()-stack.pop();
        }
        stack.push(result);
        
    }

	double Calculator::getResult(){
        return stack.top();
    }

	void Calculator::undo(){
        if(!prev.empty()){
        result = (stack.pop()-prev.pop());
        stack.push(result);
        history.push("Undo");
        }
        else throw ("CANNOT DO ANY UNDOS");

    }

	void Calculator::redo(){
        if(!prev.empty()){
        result = (stack.pop()+prev.pop());
        stack.push(result);
        history.push("Redo");
        }
        else throw ("CANNOT DO ANY RE-DOs");
    }

    

	void Calculator::printAllOperations(){
        while(!history.empty()){
            historyprint.push(history.pop());
        }

        while(!historyprint.empty()){
            std::cout<<historyprint.pop();
        }
    }
    
    