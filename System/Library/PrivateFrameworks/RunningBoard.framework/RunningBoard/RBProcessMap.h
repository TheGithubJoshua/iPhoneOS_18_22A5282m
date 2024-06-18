@class NSMutableDictionary;

@interface RBProcessMap : NSObject <NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_valueMap;
}

- (id)init;
- (void)enumerateWithBlock:(id /* block */)a0;
- (BOOL)containsIdentity:(id)a0;
- (void)removeIdentity:(id)a0;
- (void)removeAllObjects;
- (id)removeValueForIdentity:(id)a0;
- (void)addIdentity:(id)a0;
- (id)allIdentities;
- (id)valueForIdentity:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)setValue:(id)a0 forIdentity:(id)a1;
- (id)removeValueForIdentity:(id)a0 withPredicate:(id /* block */)a1;
- (id)dictionary;
- (id)allValue;
- (unsigned long long)count;

@end
