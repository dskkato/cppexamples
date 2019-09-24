.PHONY: all clean

all:
	$(MAKE) --directory autoclose
	$(MAKE) --directory composite

clean:
	$(MAKE) clean --directory autoclose
	$(MAKE) clean --directory composite
