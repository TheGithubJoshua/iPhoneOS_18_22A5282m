@class ML3StatementCacheNode;

@interface ML3StatementCacheList : NSObject

@property (readonly, nonatomic) ML3StatementCacheNode *firstNode;
@property (readonly, nonatomic) ML3StatementCacheNode *lastNode;
@property (readonly, nonatomic) unsigned long long count;

- (void)deleteOldestNode;
- (id)oldestNode;
- (void).cxx_destruct;
- (id)description;
- (void)deleteAllNodes;
- (void)appendNode:(id)a0;
- (void)promoteNodeWithDictionaryKey:(id)a0;

@end
