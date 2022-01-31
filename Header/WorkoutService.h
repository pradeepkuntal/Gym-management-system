#pragma once
#include "Workout.h"

class WorkoutService
{
private:
    /* data */
public:
    map<string,vector<Workout>>workoutlistbydate;   ///date wise list of workouts

    WorkoutService(/* args */)
    {
        //Do nothing
    }

    Workout AddWorkout(Center center,vector<Slot>slots,string date);
    map<string,vector<Workout>> GetWorkoutDB();
    //void UpdateWorkoutDB(string date,Workout workout);
    vector<Workout> ShowWorkoutInGym();

};






