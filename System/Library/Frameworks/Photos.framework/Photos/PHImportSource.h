@class NSProgress, NSString, PFTimeZoneLookup, NSURL, NSHashTable, NSMutableDictionary, PHPhotoLibrary, NSMutableSet, NSDateFormatter, PHImportOptions, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PHImportSource : PHImportExceptionRecorder {
    NSMutableDictionary *_assetsByImportIdentifier;
    NSMutableDictionary *_representationsByImportIdentifier;
    NSMutableDictionary *_audioByImportIdentifier;
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _itemsLock;
    double _assetLoadingStart;
}

@property (nonatomic) unsigned long long currentItemIndex;
@property (nonatomic) unsigned long long nextItemIndex;
@property (nonatomic) unsigned long long completedItems;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *controlQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *itemQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *batchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dupPathCollectionQueue;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSMutableArray *duplicateAssets;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *itemProcessingQueue;
@property (readonly, nonatomic) NSMutableArray *removedSourceFileIdentifiers;
@property (retain, nonatomic) NSDateFormatter *dupeDateFormatter;
@property (retain, nonatomic) NSMutableArray *processed;
@property (nonatomic) double batchStart;
@property (nonatomic) unsigned long long batchCount;
@property (nonatomic) BOOL rampBatchInterval;
@property (retain, nonatomic) NSMutableDictionary *importIdentifierToLivePhotoStateMap;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) double batchInterval;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableSet *folders;
@property (retain) NSMutableArray *errors;
@property (nonatomic) BOOL open;
@property (readonly) BOOL canShowProgress;
@property (nonatomic) BOOL deleteContentAllowed;
@property (retain, nonatomic) PHImportOptions *options;
@property (retain, nonatomic) NSMutableArray *assets;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) BOOL stalled;
@property (nonatomic) long long assetLoadOrder;
@property (nonatomic) unsigned char sourceAccessState;
@property (retain, nonatomic) NSString *prefix;
@property (readonly) BOOL canReference;
@property (retain, nonatomic) NSMutableDictionary *pairedSidecarsByImportIdentifier;
@property (readonly) PFTimeZoneLookup *timeZoneLookup;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *productKind;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) struct CGImage { } *icon;
@property (readonly, nonatomic) BOOL isCamera;
@property (readonly, nonatomic) BOOL isAppleDevice;
@property (readonly, nonatomic) BOOL canEject;
@property (readonly, nonatomic) BOOL isConnectedDevice;
@property (readonly, nonatomic) BOOL isLibrary;
@property (readonly, nonatomic, getter=isEjecting) BOOL ejecting;
@property (readonly, nonatomic) BOOL canAutolaunch;
@property (readonly, nonatomic) BOOL isAvailable;
@property (readonly, nonatomic) NSString *volumePath;
@property (readonly, nonatomic) BOOL canDeleteContent;
@property (copy, nonatomic) NSURL *autolaunchApplicationURL;
@property (readonly, nonatomic) PHPhotoLibrary *library;
@property (readonly, nonatomic) BOOL isOptimizedCPLStorage;

- (id)init;
- (BOOL)isDone;
- (id)nextItem;
- (void).cxx_destruct;
- (id)description;
- (void)addItems:(id)a0;
- (void)endWork;
- (void)removeAssets:(id)a0;
- (BOOL)isLivePhotoForImportIdentifier:(id)a0;
- (id)loadAssetsForLibrary:(id)a0 allowDuplicates:(BOOL)a1 order:(long long)a2 batchInterval:(double)a3 atEnd:(id /* block */)a4;
- (void)accessItems:(id /* block */)a0;
- (void)addImportSourceObserver:(id)a0;
- (void)addPairedSidecar:(id)a0;
- (void)addRepresentationsForAsset:(id)a0;
- (void)addSourceFileIdentifiersForRemovedFiles:(id)a0;
- (id)assetsByProcessingItem:(id)a0;
- (id)assetsDescription;
- (BOOL)batchComplete;
- (void)beginProcessingWithCompletion:(id /* block */)a0;
- (void)beginWork;
- (BOOL)confirmAsset:(id)a0 isBaseOf:(id)a1;
- (BOOL)confirmAsset:(id)a0 isRenderOf:(id)a1;
- (BOOL)confirmAsset:(id)a0 isSidecarOfAsset:(id)a1;
- (BOOL)confirmAsset:(id)a0 isSocOf:(id)a1;
- (BOOL)containsSupportedMediaWithImportExceptions:(id *)a0;
- (BOOL)date:(id)a0 matchesDate:(id)a1;
- (id)deleteImportAssets:(id)a0 isConfirmed:(BOOL)a1 atEnd:(id /* block */)a2;
- (id)deleteImportAssets:(id)a0 isConfirmed:(BOOL)a1 isCancelable:(BOOL)a2 atEnd:(id /* block */)a3;
- (void)dispatchAssetDataRequestAsync:(id)a0 usingBlock:(id /* block */)a1;
- (void)eject;
- (void)endBatch;
- (void)findDuplicatesOfItems:(id)a0 considerItemsInTheTrash:(BOOL)a1;
- (BOOL)isPairedSidecar:(id)a0;
- (id)loadAssetsForLibrary:(id)a0 allowDuplicates:(BOOL)a1 order:(long long)a2 atEnd:(id /* block */)a3;
- (id)loadAssetsForLibrary:(id)a0 allowDuplicates:(BOOL)a1 order:(long long)a2 batchSize:(unsigned long long)a3 atEnd:(id /* block */)a4;
- (id)loadAssetsForLibrary:(id)a0 allowDuplicates:(BOOL)a1 order:(long long)a2 batchSize:(unsigned long long)a3 batchInterval:(double)a4 atEnd:(id /* block */)a5;
- (void)loadSidecarsFor:(id)a0;
- (void)notifyObserversUsingBlock:(id /* block */)a0;
- (void)pauseAssetLoading;
- (id)processAssets:(id)a0;
- (void)processNextItems;
- (BOOL)processPotentialJpegAsset:(id)a0 plusRawAsset:(id)a1;
- (void)processRepresentation:(id)a0;
- (void)processResource:(id)a0;
- (void)removeImportSourceObserver:(id)a0;
- (id)requestDeleteAssetsForRecords:(id)a0;
- (void)resumeAssetLoading;
- (void)setIsLivePhotoForImportIdentifier:(id)a0;
- (void)stopAssetLoading;

@end