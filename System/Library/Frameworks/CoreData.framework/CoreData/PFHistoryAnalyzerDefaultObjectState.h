@class NSString, NSDictionary, NSNumber, NSManagedObjectID;

@interface PFHistoryAnalyzerDefaultObjectState : NSObject <PFHistoryAnalyzerObjectState>

@property (readonly, nonatomic) NSManagedObjectID *analyzedObjectID;
@property (readonly, nonatomic) NSNumber *originalTransactionNumber;
@property (readonly, nonatomic) long long originalChangeType;
@property (readonly, nonatomic) NSNumber *finalTransactionNumber;
@property (readonly, nonatomic) long long finalChangeType;
@property (readonly, nonatomic) NSDictionary *tombstone;
@property (readonly, nonatomic) NSString *finalChangeAuthor;

- (void)updateWithChange:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithOriginalChange:(id)a0;

@end
