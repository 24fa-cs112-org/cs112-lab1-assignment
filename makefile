# project name (generate executable with this name)
TEST_TARGET   = tester

CPP       = g++ --std=c++11 -c
# compiling flags here
CPPFLAGS   = -Wall -I.

LINKER   = g++ -o
# linking flags here
LFLAGS   = -Wall

SOURCES  := $(wildcard *.cpp)
INCLUDES := $(wildcard *.h)
OBJECTS  := $(SOURCES:.cpp=*.o)
rm       = rm -f

.PHONY: obj clean all

$(TEST_TARGET): obj
	$(LINKER) $(TEST_TARGET) $(LFLAGS) $(OBJECTS)
	@echo "Linking complete!"

obj: $(SOURCES) $(INCLUDES)
	$(CPP) $(CPPFLAGS) $(SOURCES)
	@echo "Compilation complete!"

clean:
	@$(rm) $(TEST_TARGET) $(OBJECTS)
	@echo "Cleanup complete!"