# Makefile for main
# Y. Liow
#------------------------------------------------------------------------------
# Macros
#------------------------------------------------------------------------------
CXX       = g++
CXXFLAGS  = -pg -Wall -fmax-errors=3 
LINK      = g++
LINKFLAGS = -pg
OBJS      = main.o
EXE       = main.exe

#------------------------------------------------------------------------------
# Executable
#------------------------------------------------------------------------------
$(EXE):	$(OBJS)
	$(LINK) $(OBJS) -o $(EXE) $(LINKFLAGS)  

asan: $(OBJS)
	$(LINK) $(OBJS) -o $(EXE) $(LINKFLAGS) -g -fsanitize=address

gprof: c $(EXE)
	rm -f gmon.out gprof.txt
	./$(EXE)
	gprof main.exe gmon.out > gprof.txt

#------------------------------------------------------------------------------
# Object files
#------------------------------------------------------------------------------
main.o:	main.cpp 
	$(CXX) $(CXXFLAGS) main.cpp -c -o main.o

#------------------------------------------------------------------------------
# Utilities
#------------------------------------------------------------------------------
clean:
	rm -rf $(OBJS) $(EXE)
c:
	rm -rf $(OBJS) $(EXE)

run:
	./$(EXE)
r:
	./$(EXE)
