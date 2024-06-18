@class NSArray, NSString, NSData, NSPersistentStoreCoordinator, NSManagedObjectID;

@interface _NSPersistentHistoryTransaction : NSPersistentHistoryTransaction <NSSecureCoding> {
    long long _rowIdentifier;
    double _timestamp;
    NSArray *_changes;
    NSString *_storeID;
    NSString *_bundleID;
    NSString *_processID;
    NSString *_contextName;
    NSString *_author;
    NSData *_queryGeneration;
    NSPersistentStoreCoordinator *_coordinator;
    NSManagedObjectID *_backingObjectID;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)changes;
- (id)processID;
- (id)_backingObjectID;
- (id)author;
- (id)storeID;
- (id)token;
- (id)contextName;
- (id)initialQueryGenerationToken;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 andObjectID:(id)a1;
- (long long)transactionNumber;
- (id)timestamp;
- (void)dealloc;
- (id)objectIDNotification;
- (id)postQueryGenerationToken;
- (id)bundleID;

@end
