/****************************************************************************

  Header file for "Operation" Hand-Eye Coordination Task Flat Sate Machine
  based on the Gen2 Events and Services Framework

 ****************************************************************************/

#ifndef OperationTaskSM_H
#define OperationTaskSM_H

// Event Definitions
#include "ES_Configure.h" /* gets us event definitions */
#include "ES_Types.h"     /* gets bool type for returns */

// typedefs for the states
// State definitions for use with the query function
typedef enum
{
  InitPState, UnlockWaiting, _1UnlockPress,
  _2UnlockPresses, Locked
}OperationTaskState_t;

// Public Function Prototypes

bool InitOperationTaskSM(uint8_t Priority);
bool PostOperationTaskSM(ES_Event_t ThisEvent);
ES_Event_t RunOperationTaskSM(ES_Event_t ThisEvent);
OperationTaskState_t QueryOperationTaskSM(void);

#endif /* OperationTaskSM_H */

