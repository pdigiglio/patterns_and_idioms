set(ABSTRACT_FACTORY_SOURCES
    AbstractFactory.cpp)

add_library(abstract_factory SHARED ${ABSTRACT_FACTORY_SOURCES})

target_include_directories(abstract_factory
    PUBLIC ${PATTERNS_AND_IDIOMS_SOURCE_DIR}/abstract_factory)
