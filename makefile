CXXFLAGS := -g -O0
CXX      := g++
SRC      := cpp-algorithms.cpp
EXE      := cpp-algorithms
RM       := rm -fr 
All : $(EXE)
$(EXE) : $(SRC)
clean  :
	$(RM) $(EXE) *~ *.dSYM/