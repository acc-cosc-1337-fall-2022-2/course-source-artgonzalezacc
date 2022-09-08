add_library(ex_08_02_library "shape.cpp" "shape.h"
                                "circle.cpp" "circle.h"
								"line.cpp" "line.h")
add_executable(ex_08_02_exe "main.cpp" "shape.cpp" "circle.cpp" "line.cpp")