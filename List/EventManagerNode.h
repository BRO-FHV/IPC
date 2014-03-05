/*
 * IPC: EventManagerNode.h
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: 05.03.2014
 * Description: 
 * TODO
 */

#ifndef EVENTMANAGERNODE_H_
#define EVENTMANAGERNODE_H_

#include <inttypes.h>
#include <stdbool.h>

// TODO remove after include scheduler.h
typedef int8_t processID;
typedef struct emn EventManagerNode;

typedef struct emn {
	int16_t eventHash;					/* hash of event name */
	int16_t maxProcesses;				/* maximum amount of processes allowed to register to this event*/
	processID allowedProcesses[];		/* ids of allowed processes */
	processID registeredProcesses[];	/* ids of registered processes */
	EventManagerNode* next;				/* pointer on next node */
} EventManagerNode;

#endif /* EVENTMANAGERNODE_H_ */
