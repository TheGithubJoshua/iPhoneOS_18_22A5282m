@class NSUUID, NSSet, NSDate;

@interface MapsSyncManagedCollectionItem : NSManagedObject

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) long long positionIndex;
@property (nonatomic, retain) NSSet *collections;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end