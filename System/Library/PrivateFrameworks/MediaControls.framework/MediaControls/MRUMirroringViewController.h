@class NSString, MRUMirroringController;

@interface MRUMirroringViewController : CCUIMenuModuleViewController <MRUMirroringControllerDelegate>

@property (retain, nonatomic) MRUMirroringController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)viewWillDisappear:(BOOL)a0;
- (id)leadingImageForMenuItem:(id)a0;
- (void)updateFooter;
- (void)mirroringController:(id)a0 didUpdateBusyIdenifiers:(id)a1;
- (void)viewDidLoad;
- (void)stopMirroringDismissOnComplete:(BOOL)a0;
- (void)mirroringController:(id)a0 didChangeOutputDevice:(id)a1;
- (void)updateItems;
- (void)mirroringController:(id)a0 didChangeAvailableOutputDevices:(id)a1;
- (void).cxx_destruct;
- (void)selectOutputDevice:(id)a0;
- (BOOL)shouldExpandModuleOnTouch:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)updateState;
- (void)viewWillAppear:(BOOL)a0;

@end
