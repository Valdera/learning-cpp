set(SUBCHAPTER "16")

subdirlist(SUBDIRS ${CMAKE_CURRENT_SOURCE_DIR})

foreach(subdir ${SUBDIRS})
    add_subdirectory(${subdir})
endforeach()
