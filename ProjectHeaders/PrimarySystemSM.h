/****************************************************************************

  Header file for Bomb Defusing Training Primary System Flat Sate Machine
  based on the Gen2 Events and Services Framework

 ****************************************************************************/

#ifndef PrimarySystemSM_H
#define PrimarySystemSM_H

// Event Definitions
#include "ES_Configure.h" /* gets us event definitions */
#include "ES_Types.h"     /* gets bool type for returns */

// typedefs for the states
// State definitions for use with the query function
typedef enum
{
  InitPState, UnlockWaiting, _1UnlockPress,
  _2UnlockPresses, Locked
}PrimarySystemState_t;

// Public Function Prototypes

bool InitPrimarySystemSM(uint8_t Priority);
bool PostPrimarySystemSM(ES_Event_t ThisEvent);
ES_Event_t RunPrimarySystemSM(ES_Event_t ThisEvent);
PrimarySystemState_t QueryPrimarySystemSM(void);

#endif /* SystemSM_H */

