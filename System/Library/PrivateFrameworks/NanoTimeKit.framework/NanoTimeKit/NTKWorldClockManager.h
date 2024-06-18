@class NSArray, WorldClockManager;

@interface NTKWorldClockManager : NSObject {
    WorldClockManager *_frameworkManager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _frameworkLock;
}

@property (readonly, nonatomic) NSArray *cities;

+ (id)sharedManager;

- (unsigned long long)addCity:(id)a0;
- (id)init;
- (void)saveCities;
- (void).cxx_destruct;
- (void)loadCities;
- (BOOL)checkIfCitiesModified;
- (BOOL)canAddCity;

@end
