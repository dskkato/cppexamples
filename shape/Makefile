vpath %.cpp src
vpath %.hpp include inc

CPPFLAGS = -I./inc -I./include
CXXFLAGS = -std=c++14 -O2

library = libshape.a
sources = Circle.cpp Shapes.cpp Square.cpp ShapeFactory.cpp
objects = $(subst .cpp,.o,$(sources))
dependencies = $(subst .o,.d,$(objects))

.PHONY: library
library: $(library)

$(library): $(objects)
	$(AR) rv $@ $^

.PHONY: clean
clean:
	$(RM) *.o *.a *.d

ifneq "$(MAKECMDGOALS)" "clean"
  -include $(dependencies)
endif

# $(call make-depend,source-file,object-file,depend-file)
define make-depend
  $(CXX) -MM -MF $3 \
  		 -MP -MT $2 \
  		 $(CXXFLAGS) \
		 $(CPPFLAGS) \
		 $(TARGET_ARCH) \
		 $1
endef

%.o: %.cpp
	$(call make-depend,$<,$@,$(subst .o,.d,$@))
	$(COMPILE.cpp) $<
