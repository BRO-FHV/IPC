/*
 * IPC: list.h
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: 05.03.2014
 * Description: 
 * TODO
 */
#ifndef LIST_H_
#define LIST_H_

#include <inttypes.h>
#include "EventManagerNode.h"

typedef struct {
	bool (* addNode)(EventManagerNode*);
	EventManagerNode* (* getNode)(int16_t);
	bool (* removeNode)(int16_t);
	bool (* removeProcess)(processID);
} EventManagerList;

EventManagerList * event_manager_list_create();

#endif /* LIST_H_ */
