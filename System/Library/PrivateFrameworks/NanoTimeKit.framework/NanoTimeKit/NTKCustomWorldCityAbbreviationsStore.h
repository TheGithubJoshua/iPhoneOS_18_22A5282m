@class NPSManager;

@interface NTKCustomWorldCityAbbreviationsStore : NSObject {
    NPSManager *_npsManager;
}

+ (id)sharedInstance;

- (void)_notifyClientsOfChange;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handlePrefsChanged;
- (id)_getCustomAbbreviationsFromPrefs;
- (id)customAbbreviations;
- (void)setCustomAbbreviation:(id)a0 forCityIdentifier:(id)a1;

@end
