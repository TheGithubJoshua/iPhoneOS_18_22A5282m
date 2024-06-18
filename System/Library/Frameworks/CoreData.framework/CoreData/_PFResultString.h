@interface _PFResultString : _PFAbstractString {
    id _parentObject;
}

+ (unsigned long long)bufferOffset;

- (BOOL)_tryRetain;
- (id)copy;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (void)dealloc;
- (BOOL)_isDeallocating;

@end
