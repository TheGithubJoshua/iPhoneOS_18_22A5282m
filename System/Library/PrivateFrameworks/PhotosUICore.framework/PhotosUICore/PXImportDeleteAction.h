@class NSString, NSProgress, NSArray, PXImportController, NSMutableArray;

@interface PXImportDeleteAction : PXImportConcurrentAction {
    NSArray *_assets;
    NSMutableArray *_removedAssets;
}

@property (retain, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) NSString *sessionUuid;
@property (weak) PXImportController *importController;
@property BOOL userInitiatedDelete;

- (void)finish;
- (id)performAction;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cancel;
- (void)start;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAssets:(id)a0;
- (BOOL)canDeleteAssets;
- (void)_performMockAction;
- (void)_performRealAction;
- (void)_preAction;
- (void)_startObservingDeleteProgress;
- (void)_stopObservingDeleteProgress;
- (void)didRemove:(id)a0;
- (void)sendActionProgress:(double)a0;

@end
