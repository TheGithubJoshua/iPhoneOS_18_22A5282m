@class NSMutableDictionary;

@interface DNDSLocationTriggerConfiguration : NSObject {
    NSMutableDictionary *_modeIdentifierByRegionIdentifier;
    NSMutableDictionary *_regionByRegionIdentifier;
}

+ (id)emptyConfiguration;

- (id)init;
- (id)regions;
- (id)regionIdentifiers;
- (void).cxx_destruct;
- (void)addTriggerForModeWithIdentifier:(id)a0 forRegion:(id)a1;
- (id)regionForRegionIdentifier:(id)a0;
- (id)modeIdentifierForRegion:(id)a0;

@end
