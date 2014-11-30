add_library(Sqr sqr.cpp ../include/sqr.h)
add_executable(experiment main.cpp)
target_link_libraries(experiment Sqr)