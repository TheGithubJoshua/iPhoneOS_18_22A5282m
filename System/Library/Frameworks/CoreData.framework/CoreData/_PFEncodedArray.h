@class NSData;

@interface _PFEncodedArray : NSArray {
    NSData *_sourceData;
    int _cd_rc;
    unsigned int _count;
}

+ (Class)classForKeyedUnarchiver;

- (id)init;
- (BOOL)_tryRetain;
- (id)copy;
- (oneway void)release;
- (Class)classForCoder;
- (id)mutableCopy;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)_replaceObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)description;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (void)dealloc;
- (const id *)_values;
- (BOOL)_isDeallocating;
- (unsigned long long)count;

@end
