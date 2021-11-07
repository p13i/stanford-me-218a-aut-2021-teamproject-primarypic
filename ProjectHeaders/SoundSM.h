/****************************************************************************

  Header file for System Sound FX Output Flat Sate Machine
  based on the Gen2 Events and Services Framework

 ****************************************************************************/

#ifndef SoundSM_H
#define SoundSM_H

// Event Definitions
#include "ES_Configure.h" /* gets us event definitions */
#include "ES_Types.h"     /* gets bool type for returns */

// typedefs for the states
// State definitions for use with the query function
typedef enum
{
  InitPState, UnlockWaiting, _1UnlockPress,
  _2UnlockPresses, Locked
}SoundState_t;

// Public Function Prototypes

bool InitSoundSM(uint8_t Priority);
bool PostSoundSM(ES_Event_t ThisEvent);
ES_Event_t RunSoundSM(ES_Event_t ThisEvent);
SoundState_t QuerySoundSM(void);

#endif /* SoundSM_H */

