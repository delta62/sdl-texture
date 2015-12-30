CMAKE_MINIMUM_REQUIRED (VERSION 2.8)
PROJECT (App)

# Add resources directory to output
ADD_SUBDIRECTORY (res)

INCLUDE_DIRECTORIES (include)

ADD_EXECUTABLE (SdlGame
    src/main.c
    src/app.c
    src/event.c
    src/game_object.c
    src/error.c
    src/alloc.c
)

INCLUDE (FindPkgConfig)
PKG_SEARCH_MODULE (SDL2 REQUIRED sdl2)

INCLUDE_DIRECTORIES (${SDL2_INCLUDE_DIRS})
TARGET_LINK_LIBRARIES (SdlGame ${SDL2_LIBRARIES})
