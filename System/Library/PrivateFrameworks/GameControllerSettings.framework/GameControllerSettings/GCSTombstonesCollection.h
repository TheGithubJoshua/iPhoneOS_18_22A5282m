@class NSArray;
@protocol GCUserDefaults, GCSSettingsStoreService;

@interface GCSTombstonesCollection : NSObject <GCSTombstones> {
    id<GCUserDefaults> _userDefaults;
}

@property (retain, nonatomic) NSArray *values;
@property (readonly, weak, nonatomic) id<GCSSettingsStoreService> settingsStore;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)storeVersionIsCompatible;
- (id)initWithSettingsStore:(id)a0 userDefaults:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)tombstoneForIdentifier:(id)a0;
- (void)updateTombstones:(id)a0;

@end
