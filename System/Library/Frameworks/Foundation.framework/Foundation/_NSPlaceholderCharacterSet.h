@class NSCharacterSet;

@interface _NSPlaceholderCharacterSet : NSCharacterSet {
    NSCharacterSet *_original;
    NSCharacterSet *_invertedSet;
    struct { unsigned char _inverted : 1; unsigned char _builtin : 1; unsigned char _isCF : 1; unsigned int _reserved : 29; } _flags;
}

- (BOOL)_tryRetain;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSupersetOfSet:(id)a0;
- (oneway void)release;
- (BOOL)isEmpty;
- (id)replacementObjectForKeyedArchiver:(id)a0;
- (id)autorelease;
- (id)replacementObjectForCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)retainCount;
- (id)retain;
- (void)dealloc;
- (id)bitmapRepresentation;
- (id)invertedSet;
- (BOOL)_isDeallocating;
- (BOOL)characterIsMember:(unsigned short)a0;
- (void)_expandInverted;
- (struct __CFCharacterSet { } *)_expandedCFCharacterSet;
- (id)initWithSet:(id)a0 options:(unsigned long long)a1;

@end
