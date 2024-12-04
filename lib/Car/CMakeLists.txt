add_library(Car INTERFACE)
target_include_directories(Car INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(Car INTERFACE Vehicle)