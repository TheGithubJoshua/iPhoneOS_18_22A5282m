@class NSSet, NSString, MOEffectiveSettings, NSNumber, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface LSApplicationRestrictionsManager : NSObject {
    NSObject<OS_dispatch_queue> *_restrictionsAccessQueue;
    NSObject<OS_dispatch_queue> *_signerIdentitySyncQueue;
    NSObject<OS_dispatch_source> *_signerIdentitySyncSource;
    NSNumber *_allowlistState;
    unsigned long long _knownSystemAppDeletionState;
    BOOL _server_newsWidgetIsRestricted;
    NSSet *_allowlistedBundleIDs;
    NSSet *_restrictedBundleIDs;
    NSNumber *_maximumRating;
    NSString *_systemMode;
}

@property (retain) MOEffectiveSettings *effectiveSettings;

- (id)init;
- (BOOL)_LSApplyRestrictedSet:(id)a0 forRestriction:(id)a1;
- (void)handleSystemModeChangeTo:(id)a0;
- (void)setRestrictedBundleIDs:(id)a0;
- (void)handleMCEffectiveSettingsChanged;
- (void)_pruneObsoleteTrustedSignerIdentities;
- (id)_LSResolveIdentifiers:(id)a0;
- (id)_MCRestrictionManager;
- (void)setAllowlistedBundleIDs:(id)a0;
- (id)_MCProfileConnection;
- (void).cxx_destruct;
- (BOOL)isFeatureAllowed:(id)a0;
- (void)clearAllValues;
- (id)calculateSetDifference:(id)a0 and:(id)a1;

@end
