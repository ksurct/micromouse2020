/* 
 * guidance.h
 */


#ifndef __GUIDANCE_H__
#define __GUIDANCE_H__


#include "../types/types.h"


/* next_state
 * 
 * Runs an algorithm on the robot and maze state to determine
 * the next desired state */
void next_state(
    const robot_state_t * const current_state,
    const maze_state_t * const current_maze,
    robot_state_t * const next_state);


#endif //__GUIDANCE_H__

    