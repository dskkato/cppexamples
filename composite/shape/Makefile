vpath %.cpp src
vpath %.hpp include inc

CPPFLAGS		:= -I./inc -I./include

local_src		:= Circle.cpp Shapes.cpp Square.cpp ShapeFactory.cpp
library			:= libshape.a
objects			:= $(subst .cpp,.o,$(local_src))
dependencies	:= $(subst .o,.d,$(objects))

.PHONY: library
library: $(library)

$(library): $(objects)
	$(AR) $(ARFLAGS) $@ $^

.PHONY: clean
clean:
	$(RM) $(objects) $(dependencies) $(library)

include ../common.mk