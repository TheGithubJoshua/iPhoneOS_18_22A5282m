@class NSMutableDictionary;

@interface AVFragmentedAssetsArray : NSArray {
    unsigned long long _count;
    unsigned long long _firstSequenceNumber;
    NSMutableDictionary *_cachedFragments;
}

- (id)init;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)count;
- (id)initWithCount:(unsigned long long)a0 firstSequenceNumber:(unsigned long long)a1;

@end
