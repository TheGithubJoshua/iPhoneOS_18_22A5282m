@class NPSDomainAccessor, NSUserDefaults, NSHashTable;

@interface NTKTritiumDefaults : NSObject {
    NPSDomainAccessor *_domainAccessor;
    NSUserDefaults *_defaults;
    NSHashTable *_observers;
}

+ (id)sharedInstance;

- (void)reload;
- (void)_synchronize;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)_domainAccessor;
- (void)_observe;
- (id)_privateBundleIDs;
- (id)_privateSiriCardIDs;
- (BOOL)allBundleIDsPrivateInTritium;
- (BOOL)isBundleIdPrivateInTritium:(id)a0;
- (BOOL)isSiriPlatterPrivateInTritium:(id)a0;
- (void)setAllBundleIDsPrivateInTritium:(BOOL)a0;
- (void)setBundleIDs:(id)a0 privateInTritium:(BOOL)a1;
- (void)setSiriPlatters:(id)a0 privateInTritium:(BOOL)a1;

@end
