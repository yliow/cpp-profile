# Makefile for main
# Y. Liow
#------------------------------------------------------------------------------
# Macros
#------------------------------------------------------------------------------
CXX       = g++
CXXFLAGS  = -Wall -fmax-errors=3 # -no-pie
LINK      = g++
LINKFLAGS = 
OBJS      = main.o
EXE       = main.exe

#------------------------------------------------------------------------------
# Executable
#------------------------------------------------------------------------------
$(EXE):	$(OBJS)
	$(LINK) $(OBJS) -o $(EXE) $(LINKFLAGS)  

asan: $(OBJS)
	$(LINK) $(OBJS) -o $(EXE) $(LINKFLAGS) -g -fsanitize=address

perf: c
	$(CXX) $(CXXFLAGS) main.cpp -c -o main.o -g
	$(LINK) $(OBJS) $(LINKFLAGS) -o $(EXE)
	perf record -e cpu-clock,faults ./$(EXE)
	perf report --stdio > perf.txt
	# to view data:
	#perf report 
	#perf report --stdio 

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
