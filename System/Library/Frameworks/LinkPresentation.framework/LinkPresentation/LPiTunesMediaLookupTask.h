@class NSArray, NSString;

@interface LPiTunesMediaLookupTask : AMSLookup {
    NSArray *_identifiers;
    NSArray *_bundleIdentifiers;
    NSString *_storefrontCountryCode;
}

- (id)init;
- (id)sharedBag;
- (void)start:(id /* block */)a0;
- (id)callerID;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 storefrontCountryCode:(id)a1;
- (id)_compileQueryParametersWithBundleIds:(id)a0 itemIds:(id)a1;

@end
