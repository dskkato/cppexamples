CPPFLAGS		:= -I./shape/include

sources			:= main.cpp
libraries		:= shape
objects			:= $(subst .cpp,.o,$(sources))
dependencies	:= $(subst .o,.d,$(objects))

.PHONY: all
all: $(objects)
	$(MAKE) --directory shape
	$(LINK.cpp) $^ -L./shape -lshape
	./a.out

# todo: add appropriate library build...
# libraries: $(libraries)

.PHONY: clean
clean:
	$(MAKE) clean --directory shape
	$(RM) a.out $(objects) $(dependencies)

include ../common.mk
