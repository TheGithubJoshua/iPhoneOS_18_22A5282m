@class NSString, MPArtworkImageAttachments, MPArtworkRepresentationCollection, NSCache;
@protocol MPArtworkDataSourceVisualIdenticality, MPArtworkDataSource, _MPArtworkCatalogOverlayDelegate;

@interface MPArtworkCatalog : NSObject {
    long long _modelRevisionID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) long long MP_artworkType;
@property (weak, nonatomic) id destination;
@property (copy, nonatomic) id /* block */ configurationBlock;
@property (nonatomic) unsigned long long representationKinds;
@property (retain, nonatomic) MPArtworkRepresentationCollection *bestAvailableRepresentationCollection;
@property (getter=isLoadingRepresentation) BOOL loadingRepresentation;
@property (copy, nonatomic) NSString *cacheIdentifier;
@property (weak, nonatomic) id requestingContext;
@property (readonly, nonatomic) id token;
@property (readonly, weak, nonatomic) id<MPArtworkDataSource> dataSource;
@property (readonly, nonatomic) NSCache *cache;
@property (readonly, nonatomic) NSCache *videoCache;
@property (readonly, nonatomic) id<MPArtworkDataSourceVisualIdenticality> visualIdenticalityIdentifier;
@property (nonatomic) unsigned long long renderHint;
@property (nonatomic) unsigned long long videoCacheStoragePolicy;
@property (weak, nonatomic) id<_MPArtworkCatalogOverlayDelegate> overlayDelegate;
@property (retain, nonatomic) id overlayToken;
@property (retain, nonatomic) id overlayStorage;
@property (nonatomic) double destinationScale;
@property (nonatomic) struct CGSize { double width; double height; } fittingSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } scaledFittingSize;
@property (readonly, nonatomic) BOOL hasImageOnDisk;
@property (nonatomic) BOOL allowsVideoConstrainedNetworkAccess;
@property (nonatomic) long long preferredVideoFormat;
@property (readonly, nonatomic) MPArtworkImageAttachments *imageAttachments;

+ (void)_setCachePurgesWhenEnteringBackground:(BOOL)a0 forCacheIdentifier:(id)a1 requestingContext:(id)a2;
+ (id)placeholderCatalogWithSymbolName:(id)a0;
+ (void)setCacheLimit:(long long)a0 forCacheIdentifier:(id)a1 cacheReference:(id)a2 representationKind:(long long)a3;
+ (void)_setCacheLimit:(long long)a0 forCacheIdentifier:(id)a1 requestingContext:(id)a2 representationKind:(long long)a3;
+ (void)_setCachePurgesWhenEnteringBackground:(BOOL)a0 forCacheIdentifier:(id)a1 requestingContext:(id)a2 representationKind:(long long)a3;
+ (id)staticArtworkCatalogWithRepresentationCollection:(id)a0;
+ (void)_setCacheLimit:(long long)a0 forCacheIdentifier:(id)a1 requestingContext:(id)a2;
+ (void)setCachePurgesWhenEnteringBackground:(BOOL)a0 forCacheIdentifier:(id)a1 cacheReference:(id)a2;
+ (void)setCacheLimit:(long long)a0 forCacheIdentifier:(id)a1 requestingContext:(id)a2 representationKind:(long long)a3;
+ (id)_registeredIdentifiableDataSourceAndTokenClasses;
+ (id)_artworkCacheForIdentifier:(id)a0 requestingContext:(id)a1 representationKind:(long long)a2;
+ (void)setCacheLimit:(long long)a0 forCacheIdentifier:(id)a1 cacheReference:(id)a2;
+ (void)setCachePurgesWhenEnteringBackground:(BOOL)a0 forCacheIdentifier:(id)a1 requestingContext:(id)a2;
+ (id)_artworkLoadQueue;
+ (void)setCachePurgesWhenEnteringBackground:(BOOL)a0 forCacheIdentifier:(id)a1 requestingContext:(id)a2 representationKind:(long long)a3;
+ (void)setCachePurgesWhenEnteringBackground:(BOOL)a0 forCacheIdentifier:(id)a1 cacheReference:(id)a2 representationKind:(long long)a3;
+ (id)artworkCacheForIdentifier:(id)a0 requestingContext:(id)a1 representationKind:(long long)a2;
+ (void)setCacheLimit:(long long)a0 forCacheIdentifier:(id)a1 requestingContext:(id)a2;
+ (id)artworkCatalogWithDataSourceShortDescription:(id)a0 dataSourceIdentifier:(id)a1 tokenParameters:(id)a2;
+ (id)staticArtworkCatalogWithImage:(id)a0;

- (BOOL)isArtworkVisuallyIdenticalToCatalog:(id)a0;
- (void)_callConfigurationWithRevisionID:(long long)a0;
- (void)requestColorAnalysisWithAlgorithm:(long long)a0 completionHandler:(id /* block */)a1;
- (void)setCacheIdentifier:(id)a0 forRequestingContext:(id)a1;
- (void)setDestination:(id)a0 forRepresentationKinds:(unsigned long long)a1 configurationBlock:(id /* block */)a2;
- (id)existingColorAnalysisWithAlgorithm:(long long)a0;
- (void)_updateWithRepresentation:(id)a0 isBestRepresentation:(BOOL)a1 modelRevisionID:(long long)a2;
- (void)requestImageWithCompletion:(id /* block */)a0;
- (unsigned long long)hash;
- (void)requestColorAnalysisWithAlgorithm:(long long)a0 completion:(id /* block */)a1;
- (void)requestRadiosityImageWithCompletionHandler:(id /* block */)a0;
- (void)_loadBestRepresentationIfNeededOfKind:(long long)a0;
- (id)_existingRepresentationOfKind:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)requestExportableArtworkPropertiesWithCompletion:(id /* block */)a0;
- (id)description;
- (void)_updateRepresentationOfKind:(long long)a0;
- (void)setDestination:(id)a0 configurationBlock:(id /* block */)a1;
- (void)requestImageWithCompletionHandler:(id /* block */)a0;
- (id)initWithToken:(id)a0 dataSource:(id)a1;
- (void)setPreferredVideoKind:(long long)a0;
- (void)setCacheIdentifier:(id)a0 forCacheReference:(id)a1;
- (void)requestVideoWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)_setCacheIdentifier:(id)a0 forRequestingContext:(id)a1;
- (void)setDestination:(id)a0 progressiveConfigurationBlock:(id /* block */)a1;
- (id)bestImageFromDisk;
- (void)_updateRepresentations;
- (void)_loadRepresentationOfKind:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_requestBestRepresentationOfKind:(long long)a0 completionHandler:(id /* block */)a1;

@end
