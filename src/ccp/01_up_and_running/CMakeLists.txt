set(CHAPTER "01")

subdirlist(SUBDIRS ${CMAKE_CURRENT_SOURCE_DIR})

foreach(subdir ${SUBDIRS})
    add_subdirectory(${subdir})
endforeach()
