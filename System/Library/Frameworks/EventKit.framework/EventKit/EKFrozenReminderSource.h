@class NSString, REMAccount;

@interface EKFrozenReminderSource : EKFrozenReminderObject

@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) REMAccount *remAccount;

+ (Class)meltedClass;

- (BOOL)disabled;
- (long long)sourceType;
- (int)managedConfigurationAccountAccess;
- (int)flags;
- (id)syncError;
- (id)delegatedAccountOwnerStoreID;
- (id)UUID;
- (id)constraintsName;
- (void)setLastSyncEndDate:(id)a0;
- (id)defaultAlarmOffset;
- (id)lastSyncEndDate;
- (void)setLastSyncStartDate:(id)a0;
- (id)title;
- (id)externalID;
- (id)lastSyncStartDate;
- (void)setSyncError:(id)a0;
- (id)meltedObjectInStore:(id)a0;

@end
