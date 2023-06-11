

set(HEADERS vehicle/car.h
            deliverycompany.h
            vehicle/abstractvehicle.h)

set(SOURCES
            main.cpp
            vehicle/car.cpp
            deliverycompany.cpp
            vehicle/abstractvehicle.cpp)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

add_library(app_lib ${SOURCES} ${HEADERS})
