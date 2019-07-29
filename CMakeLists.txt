CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(lab
	main.cpp 
)
ADD_EXECUTABLE(test
	unit_test.cpp op.cpp rand.cpp mult.cpp div.cpp add.cpp sub.cpp pow.cpp VectorContainer.cpp ListContainer.cpp sort.cpp decorator.cpp PrecisionOp.cpp PrecisionRand.cpp SciOp.cpp SciRand.cpp StandardDoubleFactory.cpp PrecisionFactory.cpp ScientificFactory.cpp command.hpp menu.hpp iterator.cpp visitor.hpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
