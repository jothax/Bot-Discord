# minimum CMake version required
cmake_minimum_required(VERSION 3.26)
# project info
project(BotDiscord DESCRIPTION "Discord bot to learn D++ library")

# create the output
add_executable(bot
    src/main.cpp
)

# link libraries
target_link_libraries(bot
    dpp
    cpr
)

# set c++ version
set_target_properties(bot PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)

# compile options
target_compile_options(bot PRIVATE
    $<$<CXX_COMPILER_ID:MSVC>:/W4>
    $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall -Wextra --pedantic-errors>
)

