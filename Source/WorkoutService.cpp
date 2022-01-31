#include "..\Header\WorkoutService.h"


Workout WorkoutService::AddWorkout(Center center,vector<Slot>slots,string date)
{
    Workout workout(center,slots);
    workoutlistbydate[date].push_back(workout);
    return workout;
}

map<string,vector<Workout>> WorkoutService::GetWorkoutDB()
{
    return workoutlistbydate;
}
vector<Workout> WorkoutService::ShowWorkoutInGym()
{
    vector<Workout>vec={};
    for(auto it:workoutlistbydate)return it.second;
    return vec;
}