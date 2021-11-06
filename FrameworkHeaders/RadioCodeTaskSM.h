/****************************************************************************

  Header file for template Flat Sate Machine
  based on the Gen2 Events and Services Framework

 ****************************************************************************/

#ifndef RadioCodeTaskSM_H
#define RadioCodeTaskSM_H

// Event Definitions
#include "ES_Configure.h" /* gets us event definitions */
#include "ES_Types.h"     /* gets bool type for returns */

// typedefs for the states
// State definitions for use with the query function
typedef enum
{
  InitPState, UnlockWaiting, _1UnlockPress,
  _2UnlockPresses, Locked
}RadioCodeTaskState_t;

// Public Function Prototypes

bool InitRadioCodeTaskSM(uint8_t Priority);
bool PostRadioCodeTaskSM(ES_Event_t ThisEvent);
ES_Event_t RunRadioCodeTaskSM(ES_Event_t ThisEvent);
RadioCodeTaskState_t QueryRadioCodeTaskSM(void);

#endif /* RadioCodeTaskSM_H */

