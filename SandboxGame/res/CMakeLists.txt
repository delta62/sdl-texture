SET (FILE_LIST
    "mario.bmp"
)

FOREACH (RES_FILE ${FILE_LIST})
    CONFIGURE_FILE (${RES_FILE} ${CMAKE_BINARY_DIR}/res/${RES_FILE} COPYONLY)
ENDFOREACH ()
