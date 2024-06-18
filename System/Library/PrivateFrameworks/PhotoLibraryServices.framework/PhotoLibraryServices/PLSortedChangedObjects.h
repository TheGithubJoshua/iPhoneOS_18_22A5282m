@class NSArray;

@interface PLSortedChangedObjects : NSObject

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) id *sortedObjectPointers;
@property (readonly, nonatomic) NSArray *changedObjects;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithChangedObjects:(id)a0;

@end
