# Makefile for Windows using Zig C++

ZIG      = zig
CXX      = $(ZIG) c++
CXXFLAGS = -std=c++20 -O2
OUTDIR   = build

.PHONY: all clean

# Only require FILE when building (not for clean)
ifndef FILE
  ifneq ($(MAKECMDGOALS),clean)
    $(error Please specify a file: make FILE=yourfile.cpp)
  endif
endif

# Derive output file name only if FILE is given
ifdef FILE
  OUTFILE = $(OUTDIR)/$(basename $(notdir $(FILE))).exe
endif

all: $(OUTFILE)

$(OUTFILE): $(FILE)
	@if not exist $(OUTDIR) mkdir $(OUTDIR)
	$(CXX) $(CXXFLAGS) $(FILE) -o $(OUTFILE)
	@echo Built $(OUTFILE)

clean:
	@echo Cleaning project...
	@if exist $(OUTDIR) rmdir /s /q $(OUTDIR)
	@del /s /q /f *.exe 2>nul || true
	@del /s /q /f *.pdb 2>nul || true
	@echo Done.
