@class NSString, PXSharedLibraryLegacyDevicesFallbackMonitor;

@interface PXCreateSharedLibraryActionPerformer : PXActionPerformer <PXAssistantControllerDelegate>

@property (retain, nonatomic) PXSharedLibraryLegacyDevicesFallbackMonitor *legacyDevicesFallbackMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)assistantController:(id)a0 completedWithError:(id)a1;
- (void)performActionWithLegacyDevicesFallbackMonitor:(id)a0 presentationEnvironment:(id)a1 completionHandler:(id /* block */)a2;

@end
