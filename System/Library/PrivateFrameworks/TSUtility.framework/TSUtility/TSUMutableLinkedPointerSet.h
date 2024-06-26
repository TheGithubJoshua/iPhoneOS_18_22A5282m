@class TSULinkedPointerSetEntry;

@interface TSUMutableLinkedPointerSet : NSObject <NSFastEnumeration> {
    struct __CFDictionary { } *mDictionary;
    TSULinkedPointerSetEntry *mHead;
    TSULinkedPointerSetEntry *mTail;
}

- (id)init;
- (id)firstObject;
- (BOOL)containsObject:(id)a0;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (id)array;
- (BOOL)isEqual:(id)a0;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (void)dealloc;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)reverseObjectEnumerator;
- (BOOL)hasObjects;
- (void)insertFirstObject:(id)a0;
- (id)objectEnumeratorAfterObject:(id)a0;

@end
