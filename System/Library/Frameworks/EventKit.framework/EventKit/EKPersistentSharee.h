@interface EKPersistentSharee : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (int)entityType;
- (void)setFirstName:(id)a0;
- (id)address;
- (void)setOwner:(id)a0;
- (id)owner;
- (void)setUUID:(id)a0;
- (void)setDisplayName:(id)a0;
- (id)displayName;
- (void)setAddress:(id)a0;
- (id)lastName;
- (id)UUID;
- (id)firstName;
- (void)setExternalID:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setLastName:(id)a0;
- (id)externalID;
- (int)shareeStatusRaw;
- (void)setShareeAccessLevelRaw:(int)a0;
- (void)setShareeMuteRemoval:(BOOL)a0;
- (void)setShareeStatusRaw:(int)a0;
- (int)shareeAccessLevelRaw;
- (BOOL)shareeMuteRemoval;

@end
