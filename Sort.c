#include <stdio.h>
#include <stdlib.h>


void SwapElement(int array[], int length, int firstIndex, int maxIndex)
{
    int temp = array [ firstIndex ];
    array [ firstIndex ] = array [ maxIndex ]; //overwrite
    array [ maxIndex ] = temp;
}


int IndexOfMaxInRange(int array[], int length, int i)
{
    int loopvariable = 0;
    int largestElem = array[i];
    int index = i;

    for(int loopvariable = i; loopvariable < length; loopvariable++)
    {
      if ( largestElem < array [ loopvariable + 1 ] )
      {
        largestElem = array[ loopvariable + 1 ];
        index       = loopvariable + 1 ;
      }
    }    
    printf ( "\tElement: %i; Index: %i\n\n", largestElem, index );
    return index;
}


void SortArray(int array[], int length)
{
    int i = 0;
    int currentIndex = 0;


    for ( currentIndex = 0; currentIndex < length; currentIndex++ )
    {

	int maxIndex = IndexOfMaxInRange(array, length, i);
    SwapElement(array, length, currentIndex, maxIndex);

	printf ("\n");
    printf("\tcurrentElem: %i, MaximumElem: %i\n", array [ currentIndex ], array [ maxIndex ] ) ;
    printf ("\n");

    }
}


int main (void)
{
	int array[9] = {0,1,3,3,5,6,7,8,9};
	int length = sizeof (array) / sizeof (array[0]);

	SortArray(array, length);
	return EXIT_SUCCESS;
}
