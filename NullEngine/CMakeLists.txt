ADD_LIBRARY (NullEngine
    src/alloc.c
    src/app.c
    src/error.c
    src/event.c
    src/game_object.c
    src/render.c
)

INCLUDE_DIRECTORIES (include)

INCLUDE (FindPkgConfig)
PKG_SEARCH_MODULE (SDL2 REQUIRED sdl2)
INCLUDE_DIRECTORIES (${SDL2_INCLUDE_DIRS})
TARGET_LINK_LIBRARIES (NullEngine ${SDL2_LIBRARIES})
