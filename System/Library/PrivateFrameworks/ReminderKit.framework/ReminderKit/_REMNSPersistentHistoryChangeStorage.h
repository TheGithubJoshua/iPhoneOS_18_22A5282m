@class NSSet, REMNSPersistentHistoryChangeTombstone, _REMChangedObjectIDStorage;

@interface _REMNSPersistentHistoryChangeStorage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long changeID;
@property (copy, nonatomic) _REMChangedObjectIDStorage *changedObjectIDStorage;
@property (nonatomic) long long changeType;
@property (copy, nonatomic) REMNSPersistentHistoryChangeTombstone *tombstone;
@property (copy, nonatomic) NSSet *updatedProperties;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
