@class NSString, NSArray, AVAssetResourceLoader, NSURL, NSUUID, AVURLAssetInternal;

@interface AVURLAsset : AVAsset <AVContentKeyRecipient, AVContentKeyRecipientInternal> {
    AVURLAssetInternal *_URLAsset;
}

@property (readonly, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;
@property (readonly, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;
@property (readonly, nonatomic) NSString *cacheKey;
@property (readonly, nonatomic) NSArray *variants;
@property (readonly, nonatomic) AVAssetResourceLoader *resourceLoader;
@property (readonly, nonatomic) BOOL mayRequireContentKeysForMediaDataProcessing;
@property (readonly, nonatomic) BOOL mayRequireContentKeysForMediaDataProcessing;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSUUID *httpSessionIdentifier;

+ (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)a0;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)_objectWithItemProviderFileURL:(id)a0 typeIdentifier:(id)a1 isInPlace:(BOOL)a2 error:(id *)a3;
+ (long long)_preferredRepresentationForItemProviderReadableTypeIdentifier:(id)a0;
+ (long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)a0;
+ (id)URLAssetWithURL:(id)a0 options:(id)a1;
+ (id)audiovisualTypes;
+ (id)UTTypeIDArrayFromUTTypeArray:(id)a0;
+ (id)_UTTypes;
+ (id)_avfValidationPlist;
+ (id)_figFileMIMETypes;
+ (id)_figFilePathExtensions;
+ (id)_figFileUTIs;
+ (id)_figHFSFileTypes;
+ (id)_figMIMETypes;
+ (id)_figStreamingMIMETypes;
+ (id)_figStreamingUTIs;
+ (id)_fileUTTypes;
+ (id)_getFigAssetCreationOptionsFromURLAssetInitializationOptions:(id)a0 assetLoggingIdentifier:(id)a1 figAssetCreationFlags:(unsigned long long *)a2 error:(id *)a3;
+ (id)_getFigAssetiTunesStoreContentInfoFromURLAssetiTunesStoreContentInfo:(id)a0;
+ (id)_initializationOptionsClasses;
+ (id)_streamingUTTypes;
+ (id)audiovisualMIMETypes;
+ (id)instanceIdentifierMapTable;
+ (BOOL)isPlayableExtendedMIMEType:(id)a0;
+ (void)setUserInfoObject:(id)a0 forURLAsset:(id)a1;
+ (id)userInfoObjectForURLAsset:(id)a0;
+ (id)userInfoObjectForURLAssetInstanceIdentifier:(id)a0;

- (void)expire;
- (void)cancelLoading;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (id)init;
- (id)lyrics;
- (id)SHA1Digest;
- (void)_addFigAssetNotifications;
- (id)assetCache;
- (id)identifyingTag;
- (id)identifyingTagClass;
- (void)_removeFigAssetNotifications;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (id)resolvedURL;
- (id)description;
- (id)initWithURL:(id)a0 options:(id)a1;
- (unsigned long long)downloadToken;
- (id)tracks;
- (Class)_classForTrackInspectors;
- (void)dealloc;
- (id)contentKeySpecifiersEligibleForPreloading;
- (id)originalNetworkContentURL;
- (id)_loadFileRepresentationOfTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (id)_assetInspector;
- (id)creationOptions;
- (id)_absoluteURL;
- (id)_assetInspectorLoader;
- (int)_attachToContentKeySession:(id)a0 contentKeyBoss:(struct CMBaseObject { } *)a1 failedSinceAlreadyAttachedToAnotherSession:(BOOL *)a2;
- (BOOL)_attachedToExternalContentKeySession;
- (Class)_classForAssetTracks;
- (Class)_classForFigAssetInspectorLoader;
- (BOOL)_clientURLLoadingRepresentsAccurateNetworkStatistics;
- (void)_ensureAssetDownloadCache;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary { } *)a0 key:(struct __CFString { } *)a1;
- (BOOL)_hasResourceLoaderDelegate;
- (id)_installHandlerForNSURLSessionConfiguration:(id)a0 queue:(id)a1;
- (id)_managedAssetCache;
- (void)_removeUserInfoObject;
- (BOOL)_requiresInProcessOperation;
- (id)_resourceLoaderWithRemoteHandlerContext:(id)a0;
- (id)_serializableCreationOptions;
- (void)_setAssetInspectorLoader:(id)a0;
- (void)_setUserInfoObject:(id)a0;
- (BOOL)_shouldOptimizeAccessForLinearMoviePlayback;
- (void)_tracksDidChange;
- (id)contentKeySession;
- (id)downloadDestinationURL;
- (id)initWithFileURL:(id)a0 offset:(long long)a1 length:(long long)a2 options:(id)a3;
- (unsigned long long)referenceRestrictions;

@end