@class NSMutableSet, NSMutableDictionary;

@interface ISUniqueOperationContext : NSObject {
    NSMutableSet *_operations;
    NSMutableDictionary *_uniqueOperations;
}

- (id)init;
- (void)addOperation:(id)a0;
- (void)dealloc;
- (id)uniqueOperationForKey:(id)a0;
- (BOOL)containsOperation:(id)a0;
- (void)setUniqueOperation:(id)a0 forKey:(id)a1;
- (void)removeOperation:(id)a0;
- (unsigned long long)countOfOperations;

@end
