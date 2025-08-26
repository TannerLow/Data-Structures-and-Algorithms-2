# Makefile for Windows using Zig C++

ZIG      = zig
CXX      = $(ZIG) c++
CXXFLAGS = -std=c++20 -O2
OUTDIR   = build

.PHONY: clean

# Default target: build the file you specify
ifeq ($(FILE),)
$(error Please specify a file: make FILE=yourfile.cpp)
endif

OUTFILE = $(OUTDIR)/$(basename $(notdir $(FILE))).exe

all: $(OUTFILE)

$(OUTFILE): $(FILE)
	@if not exist $(OUTDIR) mkdir $(OUTDIR)
	$(CXX) $(CXXFLAGS) $(FILE) -o $(OUTFILE)
	@echo Built $(OUTFILE)

clean:
	@if exist $(OUTDIR) rmdir /s /q $(OUTDIR)
