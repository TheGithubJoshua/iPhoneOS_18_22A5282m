@class NSSet, NSString, NTKFaceCollection;

@interface NTKSiriDefaults : NSObject <NTKFaceCollectionObserver> {
    NTKFaceCollection *_faceCollection;
}

@property (nonatomic) BOOL watchHasMigratedAvailableDataSources;
@property (retain, nonatomic) NSSet *phoneThirdPartyDataSources;
@property (retain, nonatomic) NSSet *watchThirdPartyDataSources;
@property (readonly, nonatomic) BOOL hasMigratedDisabledDataSources;
@property (retain, nonatomic) NSSet *disabledDataSources;
@property (readonly, nonatomic) BOOL isUpNextFaceCurrentlyActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)_activeDeviceDidChange:(id)a0;
- (void)faceCollectionDidLoad:(id)a0;
- (void).cxx_destruct;
- (void)migrateIfNecessary;
- (void)_disabledDataSourcesDidChange;
- (void)_thirdPartyDataSourcesDidChange;
- (BOOL)hasMigratedDataSources;
- (void)_synchronizeDefaultsForKeys:(id)a0;
- (id)_domainAccesor;
- (void)_fetchNewFaceCollection;

@end
