CXX := clang++

CXXFLAGS := -std=c++2a -fimplicit-modules -fimplicit-module-maps -fprebuilt-module-path=.

#CXXFLAGS += -stdlib=libc++
#LDFLAGS := -stdlib=libc++

CXX_SRCS := $(wildcard *.cc)
CXX_MODULES := $(wildcard *-module.cc)

OBJS := $(CXX_SRCS:.cc=.o)
MODULE_BMIS := $(CXX_MODULES:-module.cc=.pcm)

.PHONY: all clean
main: $(OBJS) $(MODULE_BMIS)
	$(CXX) $(LDFLAGS) $(OBJS) -o $@

clean:
	rm -rf $(OBJS) $(MODULE_BMIS) main

%.o: %.cc $(MODULE_BMIS)
	$(CXX) $(CXXFLAGS) $(CFLAGS) -c $< -o $@

%.pcm: %-module.cc
	$(CXX) $(CXXFLAGS) $(CFLAGS) -Xclang -emit-module-interface -c $^ -o $@
