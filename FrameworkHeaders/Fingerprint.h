/****************************************************************************

  Header file for template service
  based on the Gen 2 Events and Services Framework

 ****************************************************************************/

#ifndef Fingerprint_H
#define Fingerprint_H

#include "ES_Types.h"

// Public Function Prototypes

bool InitFingerprintStatus(uint8_t Priority);
bool CheckFingerprintEvents(void);

#endif /* Fingerprint_H */

