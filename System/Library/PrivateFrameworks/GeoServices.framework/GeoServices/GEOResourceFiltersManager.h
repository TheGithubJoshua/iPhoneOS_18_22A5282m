@class NSSet, GEOResourceManifestConfiguration, GEOActiveResourceFilters;
@protocol GEOResourceFiltersManagerDelegate;

@interface GEOResourceFiltersManager : NSObject {
    GEOResourceManifestConfiguration *_configuration;
    GEOActiveResourceFilters *_activeFilters;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<GEOResourceFiltersManagerDelegate> delegate;
@property (readonly, nonatomic) NSSet *activeScales;
@property (readonly, nonatomic) NSSet *activeScenarios;

- (void)activateScale:(int)a0;
- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void)_activateFilters:(id /* block */)a0 setValueBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)deactivateScale:(int)a0;
- (void)deactivateScenario:(int)a0;
- (void)activateScenario:(int)a0;
- (void)_writeToDisk;
- (void)_deactivateFilters:(id /* block */)a0;

@end
