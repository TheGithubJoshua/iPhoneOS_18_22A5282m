@interface EKPersistentEventAction : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (int)entityType;
- (void)setOwner:(id)a0;
- (id)owner;
- (void)setExternalID:(id)a0;
- (void)setExternalModificationTag:(id)a0;
- (id)externalRepresentation;
- (id)externalModificationTag;
- (void)setExternalRepresentation:(id)a0;
- (id)externalID;
- (id)externalFolderID;
- (id)externalScheduleID;
- (void)setExternalFolderID:(id)a0;
- (void)setExternalScheduleID:(id)a0;

@end
