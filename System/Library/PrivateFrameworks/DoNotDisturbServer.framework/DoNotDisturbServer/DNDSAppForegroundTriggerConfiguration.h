@class NSDictionary;

@interface DNDSAppForegroundTriggerConfiguration : NSObject {
    NSDictionary *_bundleIDToModeIdentifierTriggers;
}

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)addTriggerForModeWithIdentifier:(id)a0 onForegroundOfApp:(id)a1;
- (id)triggeringBundleIdentifiers;
- (id)modeIdentifierForBundleIdentifier:(id)a0;

@end
