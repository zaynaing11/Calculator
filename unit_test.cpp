#include "op.h"
#include "rand.h"
#include "mult.h"
#include "div.h"
#include "add.h"
#include "sub.h"
#include "pow.h"
#include "base.hpp"
#include "sort.hpp"
#include "container.hpp"
#include "VectorContainer.h"
#include "ListContainer.h"
#include "decorator.h"
#include "PrecisionOp.h"
#include "PrecisionRand.h"
#include "SciOp.h"
#include "SciRand.h"
#include "StandardDoubleFactory.h"
#include "PrecisionFactory.h"
#include "ScientificFactory.h"
#include "command.hpp"
#include "menu.hpp"
#include "iterator.h"
#include "visitor.hpp"
#include "gtest/gtest.h"

#include <iostream>
using namespace std;


TEST(VisitorTest, VisitorTestFunction){
	Op* five = new Op(5);
	Op* seven = new Op(7);
	Add* adder = new Add(five, seven);
	CountVisitor* visitor1 = new CountVisitor();
	adder->accept(visitor1);
	//test visiting add
	EXPECT_EQ(1, visitor1->add_count());
	Mult* multer = new Mult(five, seven);
	multer->accept(visitor1);
	five->accept(visitor1);
	seven->accept(visitor1);
	//test visiting mult and ops
	EXPECT_EQ(1, visitor1->mult_count());
	EXPECT_EQ(2, visitor1->op_count());
	//test decorator
	Decorator* dec = new Ceil(five);
	dec->accept(visitor1);
	EXPECT_EQ(1, visitor1->ceil_count());
	
	
	Sub* sub = new Sub(new Op(6), new Op (5));
	Add* add_cell = new Add(sub, new Op(3));
	Iterator* pre_it = new PreorderIterator(add_cell);
	pre_it->first();
	pre_it->current()->accept(visitor1);
	EXPECT_EQ(1, visitor1->add_count());
	EXPECT_EQ(1, visitor1->sub_count());
	EXPECT_EQ(2, visitor1->op_count());
	EXPECT_EQ(0, visitor1->pow_count());
	pre_it->next();
	pre_it->current()->accept(visitor1);
	EXPECT_EQ(1, visitor1->add_count());
	EXPECT_EQ(0, visitor1->pow_count());
	EXPECT_EQ(3, visitor1->op_count());


	Base* op4 = new Div( new Paren(new Op(6)), new Op(3));
	visitor1->visit_div();
	visitor1->visit_paren();
	visitor1->visit_op();
	visitor1->visit_op();
	EXPECT_EQ(1, visitor1->div_count());
	EXPECT_EQ(1, visitor1->paren_count());
	EXPECT_EQ(5, visitor1->op_count());

}



int main(){
 ::testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}
