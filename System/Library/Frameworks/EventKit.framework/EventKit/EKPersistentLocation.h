@interface EKPersistentLocation : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (Class)alternateUniverseClass;
+ (id)defaultPropertiesToLoad;

- (id)radius;
- (int)entityType;
- (id)latitude;
- (id)address;
- (void)setLongitude:(id)a0;
- (void)setLatitude:(id)a0;
- (id)longitude;
- (void)setAddress:(id)a0;
- (id)referenceFrame;
- (void)setCalendarItemOwner:(id)a0;
- (void)setReferenceFrame:(id)a0;
- (void)setRouting:(id)a0;
- (id)calendarItemOwner;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRadius:(id)a0;
- (id)title;
- (void)setTitle:(id)a0;
- (id)mapKitHandle;
- (void)setMapKitHandle:(id)a0;
- (id)contactLabel;
- (void)setContactLabel:(id)a0;
- (void)setDerivedFrom:(id)a0;
- (id)routing;
- (id)alarmOwner;
- (id)derivedFrom;
- (void)setAlarmOwner:(id)a0;

@end
