cmake_minimum_required(VERSION 3.0)

# link_libraries(soleiw)

aux_source_directory(build BUILD_SRCS)

add_executable(build ${BUILD_SRCS})


aux_source_directory(release RELEASE_SRCS)

add_executable(release ${RELEASE_SRCS})




aux_source_directory(soleiw SOLEIW_BIN_SRC)

add_executable(soleiw_bin ${SOLEIW_BIN_SRC})