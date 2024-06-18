@class NSManagedObjectID;

@interface MKFObjectDatabaseID : HMFObject

@property (readonly, copy) NSManagedObjectID *objectID;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithMKFObject:(id)a0;

@end
