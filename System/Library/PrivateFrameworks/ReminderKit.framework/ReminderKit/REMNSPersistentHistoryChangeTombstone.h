@class NSDictionary, NSUUID;

@interface REMNSPersistentHistoryChangeTombstone : REMChangeTombstone

@property (retain) NSDictionary *persistentHistoryChangeTombstone;
@property (readonly) NSUUID *uuidForChangeTracking;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)objectIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)daIsEventOnlyContainer;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)externalIdentifier;
- (id)shareeDisplayName;
- (id)assignmentOwningReminderIdentifier;
- (id)hashtagLabelUUIDForChangeTracking;
- (id)hashtagName;
- (id)hashtagReminderIdentifier;
- (id)remObjectIdentifier;
- (id)shareeAddress;
- (id)shareeOwningListIdentifier;
- (id)syncActivityUUIDForChangeTracking;

@end
