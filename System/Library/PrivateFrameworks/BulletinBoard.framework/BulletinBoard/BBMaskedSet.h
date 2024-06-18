@class NSMutableArray;

@interface BBMaskedSet : NSObject {
    unsigned long long _maskBits;
}

@property (retain, nonatomic) NSMutableArray *maskObjectSets;

- (id)objectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithMaskBits:(unsigned long long)a0;
- (void)removeObject:(id)a0;
- (id)allObjects;
- (void)addObject:(id)a0 withMask:(unsigned long long)a1;
- (void)_executeUsingMask:(unsigned long long)a0 block:(id /* block */)a1;
- (id)objectsForMask:(unsigned long long)a0;

@end
