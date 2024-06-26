@interface SCRCWeakReferenceContainer : NSObject <NSCopying> {
    id _weakReference;
}

- (id)initWithObject:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)strongReference;
- (id)autoreleasedReference;

@end
