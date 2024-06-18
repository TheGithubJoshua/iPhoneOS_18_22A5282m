@class NSMapTable;

@interface RBBundlePropertiesBSXPCProvider : NSObject {
    NSMapTable *_propertiesByIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)propertiesForIdentifier:(id)a0;
- (void)removePropertiesForIdentifier:(id)a0;

@end
