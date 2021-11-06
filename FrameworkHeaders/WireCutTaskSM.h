/****************************************************************************

  Header file for template Flat Sate Machine
  based on the Gen2 Events and Services Framework

 ****************************************************************************/

#ifndef WireCutTaskSM_H
#define WireCutTaskSM_H

// Event Definitions
#include "ES_Configure.h" /* gets us event definitions */
#include "ES_Types.h"     /* gets bool type for returns */

// typedefs for the states
// State definitions for use with the query function
typedef enum
{
  InitPState, UnlockWaiting, _1UnlockPress,
  _2UnlockPresses, Locked
}WireCutTaskState_t;

// Public Function Prototypes

bool InitWireCutTaskSM(uint8_t Priority);
bool PostWireCutTaskSM(ES_Event_t ThisEvent);
ES_Event_t RunWireCutTaskSM(ES_Event_t ThisEvent);
WireCutTaskState_t QueryWireCutTaskSM(void);

#endif /* WireCutTaskSM_H */

