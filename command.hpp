#ifndef __COMMAND_HPP__
#define __COMMAND_HPP__
#include "base.hpp"
#include "add.h"
#include "mult.h"
#include "pow.h"
#include "sub.h"
#include "div.h"
#include "SciOp.h"
#include "SciRand.h"
#include "PrecisionOp.h"
#include "PrecisionRand.h"
class Command {
    protected:
        Base* root;
    
    public:
        Command() { this->root = nullptr; }
        double execute() { return root->evaluate(); }
        std::string stringify() { return root->stringify(); }
        Base* get_root() { return root; }
};

class InitialCommand: public Command {
	public:
	InitialCommand(Base*r){ root = r;}
};

class AddCommand: public Command {
        public:
	AddCommand(Command* c, Base* b){root = new Add(c->get_root(), b);}
};

class SubCommand: public Command {
        public:
	SubCommand(Command*c, Base*b){root = new Sub(c->get_root(), b);}
};
class MultCommand: public Command {
        public:
	MultCommand(Command*c, Base*b){root = new Mult(c->get_root(),b);}
};
class DivCommand: public Command {
        public:
	DivCommand(Command*c, Base*b){root = new Div(c->get_root(),b);}
};
class PowCommand: public Command {
        public:
	PowCommand(Command*c, Base*b){root = new Pow(c->get_root(),b);}
};

#endif
