
# find all cpp file
aux_source_directory(. ALG_DIR_SRCS)

set(sotr_src_list 
    ${MODULE_DIR}/ALG/sort/Sort.cpp
    ${MODULE_DIR}/ALG/autox/max_group.cpp
    ${MODULE_DIR}/ALG/autox/entry_time.cpp
    )
set(ALG_src_list 
    ${sotr_src_list}
    ${ALG_DIR_SRCS}
    )

add_library(ALG ${ALG_src_list})


