@class NSSQLEntity, NSDictionary, NSData, NSPersistentHistoryTransaction, NSManagedObjectID;

@interface _NSPersistentHistoryChange : NSPersistentHistoryChange <NSSecureCoding> {
    long long _changeID;
    NSManagedObjectID *_changedObjectID;
    long long _changeType;
    NSDictionary *_tombstone;
    NSPersistentHistoryTransaction *_transaction;
    NSData *_columns;
    NSSQLEntity *_sqlEntity;
    NSManagedObjectID *_backingObjectID;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)_setTransaction:(id)a0;
- (id)_backingObjectID;
- (id)transaction;
- (long long)changeID;
- (long long)changeType;
- (id)changedObjectID;
- (id)tombstone;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 andChangeObjectID:(id)a1;
- (id)updatedProperties;
- (void)dealloc;

@end
