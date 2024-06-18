@class NSSet, NSMutableIndexSet;

@interface FBWorkspaceConnectionsState : NSObject <NSCopying, NSMutableCopying> {
    NSMutableIndexSet *_pidSet;
}

@property (class, readonly, nonatomic) unsigned long long minimumSerializedDataLength;

@property (readonly, nonatomic) unsigned long long serializedDataLength;
@property (readonly, copy, nonatomic) NSSet *processIdentifiers;

+ (id)deserializeLength:(out unsigned long long *)a0 fromReader:(id /* block */)a1;

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (long long)serializeToWriter:(id /* block */)a0;
- (unsigned long long)hash;
- (id)mutableCopy;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithIndexSet:(id)a0;

@end
