@interface EKPersistentResourceChange : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (int)entityType;
- (id)calendar;
- (unsigned int)changeType;
- (id)calendarItem;
- (id)deleteCount;
- (id)notification;
- (id)timestamp;
- (unsigned int)changedProperties;
- (id)updateCount;
- (BOOL)alerted;
- (id)changedByAddress;
- (id)changedByDisplayName;
- (id)changedByFirstName;
- (id)changedByLastName;
- (id)createCount;
- (id)deletedTitle;
- (unsigned int)publicStatus;

@end
