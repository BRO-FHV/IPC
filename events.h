/*
 * IPC: events.h
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: 05.03.2014
 * Description:
 * TODO
 */
#ifndef _EVENTS_H_
#define _EVENTS_H_
#include<stdbool.h>
#include<inttypes.h>

// TODO remove after include scheduler.h
typedef int8_t processID;

bool events_on(char event_name[], processID pid);

bool events_emit(char event_name[], processID pid);

#endif
