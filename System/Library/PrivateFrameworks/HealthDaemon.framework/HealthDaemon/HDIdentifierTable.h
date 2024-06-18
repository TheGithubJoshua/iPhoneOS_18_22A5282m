@class NSMapTable;

@interface HDIdentifierTable : NSObject {
    NSMapTable *_map;
    unsigned long long _nextIdentifier;
}

- (void)removeAllObjects;
- (void).cxx_destruct;
- (unsigned long long)addObject:(id)a0;
- (id)allObjects;
- (unsigned long long)count;
- (id)objectWithIdentifier:(unsigned long long)a0;
- (void)removeObjectWithIdentifier:(unsigned long long)a0;

@end
