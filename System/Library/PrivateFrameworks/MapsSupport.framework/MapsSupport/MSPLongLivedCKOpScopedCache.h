@class NSString, MSPLongLivedCKOpCache;

@interface MSPLongLivedCKOpScopedCache : NSObject

@property (retain, nonatomic) MSPLongLivedCKOpCache *cache;
@property (readonly, nonatomic) NSString *typeName;

- (id)initWithType:(id)a0;
- (void)addOperation:(id)a0;
- (void).cxx_destruct;
- (void)removeOperation:(id)a0;
- (BOOL)hasOperationID:(id)a0;
- (id)initWithType:(id)a0 cache:(id)a1;
- (BOOL)isAwareOfOperationID:(id)a0;
- (BOOL)isCurrentOperationID:(id)a0;
- (void)pruneOperationsToIDs:(id)a0;

@end
