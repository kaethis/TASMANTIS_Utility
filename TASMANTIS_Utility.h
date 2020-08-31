#ifndef _TASMANTIS_UTILITY_H_

#define _TASMANTIS_UTILITY_H_


#include <Arduino.h>

#include "TASMANTIS_Utility.h"


class TASMANTIS_Utility { /* --------------------------------------------------------------------------------------------------
* This CLASS ...
* -------------------------------------------------------------------------------------------------------------------------- */

  public:

    typedef union {

        float f;

        byte b[4];

    } floatunion_t;


    typedef union {

        int i;

        byte b[2];

    } intunion_t;


  private:

};


#endif /* _TASMANTIS_UTILITY_H_ */
