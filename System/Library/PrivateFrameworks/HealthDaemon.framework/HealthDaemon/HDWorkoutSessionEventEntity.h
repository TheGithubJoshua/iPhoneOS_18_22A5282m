@interface HDWorkoutSessionEventEntity : HDWorkoutEventEntity

+ (id)databaseTable;
+ (long long)protectionClass;
+ (Class)workoutEventClass;
+ (id)ownerEntityReferenceColumn;
+ (Class)ownerEntityClass;
+ (id)workoutEventsWithWorkoutSession:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
