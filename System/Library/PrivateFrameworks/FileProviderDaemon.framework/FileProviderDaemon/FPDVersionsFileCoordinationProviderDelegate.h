@class FPDExtensionManager;

@interface FPDVersionsFileCoordinationProviderDelegate : NSObject <FPDFileCoordinationProviderDelegate> {
    FPDExtensionManager *_extensionManager;
}

- (id)_physicalURLForURL:(id)a0;
- (id)_fileReactorID;
- (id)initWithExtensionManager:(id)a0;
- (id)_siblingDelegateForURL:(id)a0;
- (void)_provideItemAtURL:(id)a0 withInfo:(id)a1 completionHandler:(id /* block */)a2;
- (void)_cancelProvidingItemAtURL:(id)a0 toReaderWithID:(id)a1;
- (id)_providedItemsOperationQueue;
- (void).cxx_destruct;
- (void)_writerWithID:(id)a0 didFinishWritingForURL:(id)a1;
- (void)_providedItemAtURL:(id)a0 didLosePresenterWithID:(id)a1;
- (void)_providedItemAtURL:(id)a0 didGainPresenterWithID:(id)a1;
- (void)_providedItemAtURL:(id)a0 withPresenterWithID:(id)a1 didMoveToURL:(id)a2;
- (void)_movingItemAtURL:(id)a0 requiresProvidingWithDestinationURL:(id)a1 completionHandler:(id /* block */)a2;

@end
