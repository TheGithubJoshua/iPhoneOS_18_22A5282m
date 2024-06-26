@class NSString, OKPresentation, NSObject;
@protocol OKMediaFeederDelegate, OS_dispatch_queue;

@interface OKMediaFeeder : NSObject <OKCollectionProxyDataSource, OKSettingsSupport> {
    NSObject<OS_dispatch_queue> *_processingQueue;
}

@property (nonatomic) OKPresentation *presentation;
@property (nonatomic) id<OKMediaFeederDelegate> delegate;
@property (nonatomic) unsigned long long startIndex;
@property (nonatomic) BOOL rotationEnabled;
@property (nonatomic) BOOL wantsLiveUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isRemote;
+ (id)operationWithBlock:(id /* block */)a0 cancellationBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
+ (void)setupJavascriptContext:(id)a0;
+ (BOOL)supportLiveUpdates;
+ (id)supportedSettings;

- (id)initWithSettings:(id)a0;
- (id)init;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)reloadData;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)allObjects;
- (id)valueForUndefinedKey:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (unsigned long long)_numberOfMediaItems;
- (unsigned long long)numberOfMediaItems;
- (unsigned long long)_indexFromRotatedIndex:(unsigned long long)a0;
- (id)_mediaItemsForMediaURLs:(id)a0;
- (unsigned long long)_rotatedIndexFromIndex:(unsigned long long)a0;
- (id)allKeysForDictionaryProxy:(id)a0;
- (id)allMediaURLs;
- (BOOL)canBePersisted;
- (unsigned long long)countOfDictionaryProxy:(id)a0;
- (id)dictionaryProxy:(id)a0 objectAtIndexPath:(id)a1;
- (id)dictionaryProxy:(id)a0 objectForKey:(id)a1;
- (void)enumerateObjectsAtIndexes:(id)a0 usingBlock:(id /* block */)a1;
- (id)feederSettings;
- (unsigned long long)indexForMediaItem:(id)a0;
- (id)indexesForMediaObjects:(id)a0;
- (id)mediaItemAtIndex:(unsigned long long)a0;
- (id)mediaItemsAtIndexes:(id)a0;
- (id)mediaObjectURLsAtIndexes:(id)a0;
- (id)mediaObjectsAtIndexes:(id)a0;
- (id)mediaURLAtIndex:(unsigned long long)a0;
- (id)mediaURLsAtIndexes:(id)a0;
- (unsigned long long)numberOfMediaObjects;
- (void)performAsynchronousBarrierUsingBlock:(id /* block */)a0;
- (void)reloadDataWithProgressBlock:(id /* block */)a0 andCompletionHandler:(id /* block */)a1;
- (id)reloadMediaObjectsWithCompletionHandler:(id /* block */)a0;

@end
