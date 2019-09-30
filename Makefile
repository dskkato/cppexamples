.PHONY: all clean

all:
	$(MAKE) --directory autoclose
	$(MAKE) --directory composite
	$(MAKE) --directory eigen_example
	$(MAKE) --directory opencv_imgprocs
	$(MAKE) --directory opencv_3dvolume

clean:
	$(MAKE) clean --directory autoclose
	$(MAKE) clean --directory composite
	$(MAKE) clean --directory eigen_example
	$(MAKE) clean --directory opencv_imgprocs
	$(MAKE) clean --directory opencv_3dvolume
