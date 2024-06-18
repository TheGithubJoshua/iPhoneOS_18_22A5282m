@interface EKPersistentNotification : EKPersistentObject

+ (id)relations;

- (int)entityType;
- (id)calendar;
- (void)setUUID:(id)a0;
- (id)UUID;
- (void)setExternalID:(id)a0;
- (void)setExternalModificationTag:(id)a0;
- (id)externalModificationTag;
- (id)externalID;
- (id)hostURL;
- (void)setHostURL:(id)a0;

@end
