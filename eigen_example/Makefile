sources			:= main.cpp
objects			:= $(subst .cpp,.o,$(sources))
dependencies	:= $(subst .o,.d,$(objects))

CPPFLAGS		+= -I/usr/local/include/eigen3

.PHONY: all
all: $(objects)
	$(LINK.cpp) $^
	./a.out

.PHONY: clean
clean:
	$(RM) a.out $(objects) $(dependencies)

include ../common.mk
