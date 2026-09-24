    #ifndef TAG_EDITOR_H
    #define TAG_EDITOR_H

    /* created validation structure */
    typedef enum 
    {
        SUCCESS,
        FAILURE
    }Status;

    /* Header Inclusion */
    #include<stdio.h>

    /* Function prototype */
    Status file_val(FILE *mp3);  //For validating the ID3v2 header of the input file
    #endif
