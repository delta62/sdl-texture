ADD_EXECUTABLE (SandboxGame src/main.c)

INCLUDE_DIRECTORIES (../NullEngine/include)
INCLUDE_DIRECTORIES (include)
ADD_SUBDIRECTORY (res)
TARGET_LINK_LIBRARIES (SandboxGame NullEngine)
