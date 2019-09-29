sources			:= main.cpp
libraries		:= shape
objects			:= $(subst .cpp,.o,$(sources))
dependencies	:= $(subst .o,.d,$(objects))

CPPFLAGS		+= -I./shape/include
LDFLAGS			+= -L./shape -lshape

.PHONY: all
all: $(objects)
	$(MAKE) --directory shape
	$(LINK.cpp) $^
	./a.out

# todo: add appropriate library build...
# libraries: $(libraries)

.PHONY: clean
clean:
	$(MAKE) clean --directory shape
	$(RM) a.out $(objects) $(dependencies)

include ../common.mk
