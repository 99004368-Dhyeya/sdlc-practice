#include "plotfunctions.h"

int testWritePNG(char *name)
{       
    FILE *testPNG = fopen (name, "rb");

    if (testPNG == NULL) 
    {
        fclose(testPNG);
        return WRITE_FAILED;
    }
    unsigned char head[8];
    fread(head, sizeof(head), 1, testPNG);
    unsigned char signature[8] = {0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A};
        if (!memcmp(signature, head, 8))
        {
            fclose(testPNG);
            return WRITE_SUCCESS;
        }
        else
        {   
            fclose(testPNG);
            return WRITE_FAILED;
        }    
}