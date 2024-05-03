#ifndef CALCULATOR_H_
#define CALCULATOR_H_
#include "linkedListStack.h"



class Calculator {
public:
	Calculator();
	~Calculator();
	void add(double);
	void subtract(double);
	double getResult();
	void undo();
	void redo();
	void printAllOperations();
private:
	double result;
	linkedListStack<double> stack;
	linkedListStack<double> prev;
	linkedListStack<std::string> history;
	linkedListStack<std::string> historyprint;

};

#endif /* CALCULATOR_H_ */
