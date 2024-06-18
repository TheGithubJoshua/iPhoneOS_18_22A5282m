@class NSString, NSMutableDictionary;

@interface MCMContainerClassPathCache : NSObject <MCMUserIdentityCacheObserver> {
    NSMutableDictionary *_lookup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lookupLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)userIdentityCache:(id)a0 didInvalidateUserIdentity:(id)a1;
- (id)referenceForPOSIXUser:(id)a0;
- (void)flush;
- (void)_lock_flush;
- (void)userIdentityCache:(id)a0 didAddUserIdentity:(id)a1;
- (id)containerClassPathForContainerIdentity:(id)a0 typeClass:(Class)a1;
- (id)containerClassPathForUserIdentity:(id)a0 containerClass:(unsigned long long)a1 typeClass:(Class)a2;
- (void).cxx_destruct;
- (id)containerClassPathWithURL:(id)a0 reference:(id)a1;
- (id)_lock_containerClassPathForUserIdentity:(id)a0 containerClass:(unsigned long long)a1 typeClass:(Class)a2;

@end
