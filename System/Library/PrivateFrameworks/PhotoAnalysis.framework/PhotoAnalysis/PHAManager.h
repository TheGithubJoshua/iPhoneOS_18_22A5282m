@class PGManager, NSURL, NSString, NSMutableDictionary, PHPhotoLibrary, PHAMonitoring, PHAExecutive, PHAJobCoordinator, CPAnalytics;

@interface PHAManager : NSObject <PHAServiceOperationHandling> {
    PHAMonitoring *_monitoring;
    unsigned long long _processedAssetCount;
}

@property (retain) NSMutableDictionary *photoAnalysisWorkersByType;
@property (readonly) PHAExecutive *executive;
@property (readonly) NSURL *libraryURL;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) PGManager *graphManager;
@property (readonly) PHAJobCoordinator *jobCoordinator;
@property (readonly, getter=isQuiescent) BOOL quiescent;
@property (readonly) CPAnalytics *analytics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allWorkerClasses;
+ (void)enumerateWorkerClassesUsingBlock:(id /* block */)a0;

- (id)backloggedStatus;
- (void)shutdown;
- (id)init;
- (void)requestEnergyStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (BOOL)isReadyForAnalysis;
- (void)stopAllBackgroundActivities;
- (id)statusAsDictionary;
- (void)backgroundActivityDidBegin;
- (BOOL)photosIsConnected;
- (BOOL)validateOperation:(id)a0 forConnection:(id)a1;
- (void)stopBackgroundActivity;
- (BOOL)isBacklogged;
- (void)triggerBackgroundActivity;
- (void)stopBackgroundActivityWaitForCompletion;
- (BOOL)turboIsEnabled;
- (void)reportTurboEnabledWithContext:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)turboConstraintsWereRemoved;
- (void)handleOperation:(id)a0;
- (id)monitoring;
- (void)dumpAnalysisStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (id)clientDispatcher;
- (id)storytellingWorker;
- (void)checkForQuiescence;
- (void)enableTurboMode;
- (void)enumerateWorkersUsingBlock:(id /* block */)a0;
- (id)initWithPhotoLibraryURL:(id)a0 executive:(id)a1;
- (void)startTurboProcessing;
- (void)disableTurboMode;

@end
