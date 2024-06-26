@class NSString, NSArray, CLPlacemark, INDateComponentsRange;

@interface INSearchForPhotosIntent : INIntent <INSearchForPhotosIntentExport>

@property (readonly, copy, nonatomic) INDateComponentsRange *dateCreated;
@property (readonly, copy, nonatomic) CLPlacemark *locationCreated;
@property (readonly, copy, nonatomic) NSString *albumName;
@property (readonly, copy, nonatomic) NSArray *searchTerms;
@property (readonly, nonatomic) long long searchTermsOperator;
@property (readonly, nonatomic) unsigned long long includedAttributes;
@property (readonly, nonatomic) unsigned long long excludedAttributes;
@property (readonly, copy, nonatomic) NSArray *peopleInPhoto;
@property (readonly, nonatomic) long long peopleInPhotoOperator;
@property (copy, nonatomic) NSArray *events;
@property (readonly, nonatomic) long long eventsOperator;
@property (copy, nonatomic) NSArray *places;
@property (readonly, nonatomic) long long placesOperator;
@property (copy, nonatomic) NSArray *activities;
@property (readonly, nonatomic) long long activitiesOperator;
@property (copy, nonatomic) NSArray *geographicalFeatures;
@property (readonly, nonatomic) long long geographicalFeaturesOperator;
@property (copy, nonatomic) NSString *memoryName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAlbumName:(id)a0;
- (id)_dictionaryRepresentation;
- (void)setSearchTerms:(id)a0;
- (id)domain;
- (void)_setMetadata:(id)a0;
- (void)setDomain:(id)a0;
- (id)_metadata;
- (long long)_intentCategory;
- (void)setDateCreated:(id)a0;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithDateCreated:(id)a0 locationCreated:(id)a1 albumName:(id)a2 searchTerms:(id)a3 includedAttributes:(unsigned long long)a4 excludedAttributes:(unsigned long long)a5 peopleInPhoto:(id)a6;
- (id)parametersByName;
- (void)setExcludedAttributes:(unsigned long long)a0;
- (void)setIncludedAttributes:(unsigned long long)a0;
- (void)setLocationCreated:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setPeopleInPhoto:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
