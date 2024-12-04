add_library(Truck INTERFACE)
target_include_directories(Truck INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(Truck INTERFACE Vehicle)