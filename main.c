 /*
 *  ———————————————————————————————————————————————————————————————————————
 *  Project : MP3 ID3v2 Tag Viewer and Editor
 *  File    : main.c
 *  Author  : Jeeva I
 *  Date    : 19 September 2026
 *  Language: C
 *
 *  Description:
 *      This is the main driver file of the MP3 ID3v2 Tag Viewer and Editor.
 *      It handles command-line arguments and selects the required operation
 *      based on the option provided by the user.
 *
 *      The program supports:
 *          - Viewing ID3v2 tags from an MP3 file
 *          - Editing a specific ID3v2 tag
 *          - Displaying the help menu
 *          - Handling invalid command-line options
 *
 *  Command-Line Options:
 *      -v  View ID3v2 tags of an MP3 file
 *      -e  Edit a specific ID3v2 tag
 *      -h  Display the help menu
 *
 *  File Info:
 *      - Validates the command-line arguments before processing
 *      - Selects the appropriate operation based on the user option
 *      - Passes file and tag information to the corresponding functions
 *      - Tag reading and editing operations are implemented separately
 *
 *  Sample User Inputs:
 *      ./a.out -v sample.mp3
 *          → View ID3v2 tags of the file 'sample.mp3'
 *
 *      ./a.out -e -T "New Title" sample.mp3
 *          → Change the title tag of 'sample.mp3' to 'New Title'
 *
 *      ./a.out -h
 *          → Display the help menu
 *
 *  ———————————————————————————————————————————————————————————————————————
 */

 /* Header Inclusion*/
 #include<stdio.h>
 #include<string.h>


 //Main program starts here
 int main(int argc, char *argv[])
 {
    // Checking whether the user has provided command-line arguments
    if(argc < 2)
    {
        printf("Enter the command-line arguments properly\n");//Displaying error message
        return 0;
    }

    //Checking the user choice 
    if(strcmp(argv[1], "-v") == 0)
    {
        //Validates the CLA count
        if(argc != 3)
        {
            printf("Invalid input\n"); //Displaying error message
            return 0;
        }
        printf("View option is selected\n"); //User choose view option
    }
    else if(strcmp(argv[1], "-e") == 0)
    {
        //Validates the CLA count
        if(argc != 5)
        {
            printf("Invalid input\n"); //Displaying error message
            return 0;
        }
        printf("Edit option is selected\n"); //User choose Edit option
    }
    else if(strcmp(argv[1], "-h") == 0)
    {
        
        //Validates the CLA count
        if(argc != 2)
        {
            printf("Invalid input\n"); //Displaying error message
            return 0;
        }
        printf("Help option is selected\n"); //User choose Help option
    }
    else
    {
        printf("Invalid option\n"); 
        printf("*---------------------------------------Usage:-------------------------------------------*\n");
        printf("                            ./a.out -v song.mp3\n");
        printf("                            ./a.out -e -T \"New Title\" song.mp3\n");
        printf("                            ./a.out -h\n");
        printf("*-----------------------------------------------------------------------------------------*\n");
    return 0;
    }
    
    return 0;
 }