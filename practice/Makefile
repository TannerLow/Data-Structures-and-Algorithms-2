CXX = zig c++
CXXFLAGS = -std=c++17 -O2
ALGORITHMS = binary_search quicksort lower_bound boyer_moore upper_bound

INPUT_DIR = inputs
OUTPUT_DIR = outputs
BUILD_DIR = build

.PHONY: all test clean

all: $(ALGORITHMS)

# Compile each .cpp into .exe
%: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $(BUILD_DIR)\$@.exe

$(BUILD_DIR):
	if not exist $(BUILD_DIR) mkdir $(BUILD_DIR)

# Run tests
test: $(ALGORITHMS)
	@for %%A in ($(ALGORITHMS)) do ( \
		echo Running %%A... && \
		$(BUILD_DIR)\%%A.exe < $(INPUT_DIR)\%%A.in > $(BUILD_DIR)\%%A.out && \
		fc $(BUILD_DIR)\%%A.out $(OUTPUT_DIR)\%%A.out >nul && \
		( echo %%A passed! ) || ( echo %%A failed! ===============) \
	)

clean:
	if exist $(BUILD_DIR) rmdir /s /q $(BUILD_DIR)
