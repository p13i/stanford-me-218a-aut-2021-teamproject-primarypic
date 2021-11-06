/****************************************************************************

  Header file for template Flat Sate Machine
  based on the Gen2 Events and Services Framework

 ****************************************************************************/

#ifndef FSMTemplate_H
#define FSMTemplate_H

// Event Definitions
#include "ES_Configure.h" /* gets us event definitions */
#include "ES_Types.h"     /* gets bool type for returns */

// typedefs for the states
// State definitions for use with the query function
typedef enum
{
  InitPState, UnlockWaiting, _1UnlockPress,
  _2UnlockPresses, Locked
}TemplateState_t;

// Public Function Prototypes

bool InitSystemSM(uint8_t Priority);
bool PostSystemSM(ES_Event_t ThisEvent);
ES_Event_t RunSystemSM(ES_Event_t ThisEvent);
TemplateState_t QuerySystemSM(void);

#endif /* FSMTemplate_H */

