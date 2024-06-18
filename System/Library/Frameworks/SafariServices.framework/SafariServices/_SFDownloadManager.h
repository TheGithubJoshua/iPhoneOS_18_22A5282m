@class NSDate, NSString, NSArray, WBSCoalescedAsynchronousWriter, NSURL, NSTimer, NSMutableArray, _SFDownloadIconCache, NSMapTable;
@protocol _SFDownloadDelegate;

@interface _SFDownloadManager : NSObject <_SFDownloadDelegate> {
    NSMutableArray *_downloads;
    NSURL *_downloadHistoryURL;
    WBSCoalescedAsynchronousWriter *_historyWriter;
    BOOL _loadedDownloadHistory;
    id /* block */ _blockToExecuteWhenDownloadHistoryIsLoaded;
    NSMapTable *_downloadsToDeferAdding;
    NSTimer *_removeDownloadsTimer;
    NSTimer *_updateTotalProgressTimer;
    long long _viewingDownloadsCount;
}

@property (retain, nonatomic, setter=_setLastUnviewedDownloadDate:) NSDate *_lastUnviewedDownloadDate;
@property (readonly, nonatomic) NSURL *downloadsRootURL;
@property (weak, nonatomic) id<_SFDownloadDelegate> extraDownloadDelegate;
@property (readonly, copy, nonatomic) NSArray *downloads;
@property (readonly, nonatomic) _SFDownloadIconCache *iconCache;
@property (readonly, nonatomic) double totalProgress;
@property (readonly, nonatomic) BOOL hasUnviewedDownloads;
@property (readonly, nonatomic) unsigned long long runningDownloadsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultDownloadsHistoryURL;
+ (id)downloadRepresentationsAtURL:(id)a0;
+ (id)sharedManager;

- (void)downloadContentsDidChange:(id)a0;
- (void)createDirectoryForDownload:(id)a0 completionHandler:(id /* block */)a1;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)reloadDownloadsSynchronously;
- (BOOL)shouldExcludeDownloadFromList:(id)a0;
- (void)_setHasUnviewedDownloadsIfNeeded;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)downloadDidFail:(id)a0;
- (BOOL)downloadShouldImportPlaceholderToDownloadsFolder:(id)a0;
- (void)didEndViewingDownloads;
- (void)downloadWillBeDeleted:(id)a0;
- (void)_removeDeletedDownloads;
- (void)setHasUnviewedDownloads:(BOOL)a0;
- (void)downloadDidFinish:(id)a0;
- (void)downloadShouldContinueAfterReceivingResponse:(id)a0 decisionHandler:(id /* block */)a1;
- (id)_busyDownloads;
- (BOOL)_canExpireDownloadOnCompletion:(id)a0;
- (id)_dataForPersistingToHistory;
- (void)downloadDidResume:(id)a0;
- (void)_addDownload:(id)a0;
- (void)downloadDidStart:(id)a0;
- (void).cxx_destruct;
- (double)_calculateTotalProgress;
- (void)removeDownloads:(id)a0;
- (void)_removeOldDownloadsAndUpdateTimerIfNeeded;
- (void)getDownloadsWithCompletionHandler:(id /* block */)a0;
- (void)downloadDidReceiveResponse:(id)a0;
- (void)_loadDownloadHistoryAsynchronous:(BOOL)a0;
- (BOOL)shouldExcludeDownloadFromFileSystem:(id)a0;
- (void)dealloc;
- (id)_containerDirectoryForDownload:(id)a0;
- (id)initAsReadonly:(BOOL)a0;
- (void)_noteDownloadsChanged;
- (void)downloadDidImportFileToDownloadsFolder:(id)a0;
- (void)_startUpdateTotalProgressTimerIfNeeded;
- (void)_loadDownloadHistory;
- (void)deferAddingDownloadWhenStarted:(id)a0;
- (void)didBeginViewingDownloads;
- (void)_updateTotalProgress:(id)a0;
- (void)savePendingChangesBeforeTermination;
- (void)removeDownloadsStartedAfterDate:(id)a0;

@end
