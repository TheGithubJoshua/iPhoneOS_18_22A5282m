@class NSString;

@interface NSSQLiteIndexStatistics : NSObject

@property (readonly, nonatomic) NSString *storeIdentifier;
@property (readonly, nonatomic) NSString *indexName;
@property (readonly, nonatomic) long long executionCount;
@property (readonly, nonatomic) long long instructionCount;
@property (readonly, nonatomic) long long rowCount;

- (id)init;
- (id)initWithResultDictionary:(id)a0 storeID:(id)a1;
- (id)initWithName:(id)a0 storeID:(id)a1;
- (void)dealloc;

@end
