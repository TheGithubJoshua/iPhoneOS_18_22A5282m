@class NSString, NSHashTable;

@interface PUTilingDataSource : NSObject

@property (readonly, nonatomic) NSHashTable *_changeObservers;
@property (retain, nonatomic) NSString *identifier;

- (id)init;
- (long long)numberOfSubItemsAtIndexPath:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)enumerateIndexPathsStartingAtIndexPath:(id)a0 reverseDirection:(BOOL)a1 usingBlock:(id /* block */)a2;

@end
