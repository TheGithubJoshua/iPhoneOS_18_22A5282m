@protocol HKSPUserDefaults;

@interface HKSPPersistentSyncAnchorContainer : HKSPSyncAnchorContainer {
    id<HKSPUserDefaults> _defaults;
}

+ (BOOL)supportsSecureCoding;

- (void)lock_setSyncAnchor:(id)a0 forKey:(id)a1;
- (id)initWithIdentifier:(id)a0 defaults:(id)a1;
- (void).cxx_destruct;
- (void)lock_removeSyncAnchorForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)inMemoryCopy;
- (id)lock_getSyncAnchorForKey:(id)a0;

@end
