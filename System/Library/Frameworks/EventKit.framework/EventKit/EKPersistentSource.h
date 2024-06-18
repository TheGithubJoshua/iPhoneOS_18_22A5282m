@class NSString, NSNumber, EKFrozenReminderSource;

@interface EKPersistentSource : EKPersistentObject

@property (readonly, nonatomic) NSString *UUID;
@property (nonatomic) long long sourceType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSNumber *defaultAlarmOffset;
@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL onlyCreatorCanModify;
@property (nonatomic) int preferredEventPrivateValue;
@property (nonatomic) int strictestEventPrivateValue;
@property (retain, nonatomic) NSString *UUID;
@property (retain) EKFrozenReminderSource *reminderSource;

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;
+ (id)propertyKeyForUniqueIdentifier;

- (id)constraints;
- (void)setOwnerName:(id)a0;
- (id)ownerName;
- (int)entityType;
- (id)notes;
- (BOOL)disabled;
- (void)setSourceType:(long long)a0;
- (id)cachedExternalInfoData;
- (void)setNotes:(id)a0;
- (long long)sourceType;
- (int)managedConfigurationAccountAccess;
- (int)flags2;
- (int)flags;
- (void)setCachedExternalInfoData:(id)a0;
- (id)syncError;
- (void)setDisplayOrder:(int)a0;
- (id)delegatedAccountOwnerStoreID;
- (void)setOnlyCreatorCanModify:(BOOL)a0;
- (void)setFlags2:(int)a0;
- (void)setConstraintsName:(id)a0;
- (void)setShowsNotifications:(BOOL)a0;
- (int)displayOrder;
- (id)constraintsName;
- (void)setFlags:(int)a0;
- (int)strictestEventPrivateValueRaw;
- (void)setLastSyncEndDate:(id)a0;
- (void)setExternalID:(id)a0;
- (BOOL)showsNotifications;
- (void).cxx_destruct;
- (void)setPreferredEventPrivateValueRaw:(int)a0;
- (void)setExternalModificationTag:(id)a0;
- (void)setDefaultAllDayAlarmOffset:(id)a0;
- (id)description;
- (id)defaultAlarmOffset;
- (id)lastSyncEndDate;
- (id)defaultAllDayAlarmOffset;
- (void)setDisabled:(BOOL)a0;
- (void)setStrictestEventPrivateValueRaw:(int)a0;
- (id)creatorBundleID;
- (id)creatorCodeSigningIdentity;
- (int)preferredEventPrivateValueRaw;
- (id)externalModificationTag;
- (void)setLastSyncStartDate:(id)a0;
- (void)setCreatorBundleID:(id)a0;
- (id)title;
- (void)setDefaultAlarmOffset:(id)a0;
- (BOOL)onlyCreatorCanModify;
- (void)setTitle:(id)a0;
- (id)externalID;
- (id)lastSyncStartDate;
- (void)setSyncError:(id)a0;
- (void)setCreatorCodeSigningIdentity:(id)a0;
- (void)setDelegatedAccountOwnerStoreID:(id)a0;

@end
