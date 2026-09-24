    //Header Inclusion
    #include"tag_editor.h"
    #include<string.h>

    /* Function defintion */

    Status file_val(FILE *mp3) //For validating the ID3v2 header of the input file
    {
        //Validate the mp3 file 
        if(mp3 == NULL)
        {
            printf("Failed to open MP3 file\n"); //Prints the error message
            return FAILURE;
        }

        //Declaration of character array 
        char temp[4];
        unsigned char version;
        unsigned char revision;
        unsigned char flag;
        char tag_size[4];

        //Read the first 3 bytes from the MP3 file
        if((fread(temp, 1, 3, mp3)) != 3)
        {
            printf("Failed to read the file\n"); //prints error message
            return FAILURE;
        }

        temp[3] = '\0'; //Adding Null to complete the string 

        //Comparing string 
        if(strcmp("ID3",temp) != 0)
        {
            printf("Invalid ID3v2 tag\n"); //prints error messge
            return  FAILURE;
        }

            //Read the version byte from the ID3v2 header
            if((fread(&version, 1, 1, mp3)) != 1)
            {
                printf("Failed to read the file\n"); //prints error message
                return FAILURE;
            }

            //Read the revision byte from the ID3v2 header
            if((fread(&revision, 1, 1, mp3)) != 1)
            {
                printf("Failed to read the file\n"); //prints error message
                return FAILURE;
            }
            //Read the flags byte from the ID3v2 header
            if((fread(&flag, 1, 1, mp3)) != 1)
            {
                printf("Failed to read the file\n"); //prints error message
                return FAILURE;
            }
            


        return SUCCESS;
    }