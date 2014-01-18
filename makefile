CXXFLAGS := -g -O0
CXX      := g++
SRC      := cpp-algorithms.cpp
EXE      := cpp-algorithms
RM       := rm -fr 
all : $(EXE)
$(EXE) : $(SRC)
clean  :
	$(RM) $(EXE) *~ *.dSYM/
run : all
	@./$(EXE)
	