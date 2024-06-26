@class NSString;
@protocol DevicePINControllerDelegate;

@interface MCUIPINController : DevicePINController <UIAdaptivePresentationControllerDelegate>

@property (weak, nonatomic) id<DevicePINControllerDelegate> delegate;
@property (nonatomic) unsigned long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)presentationControllerDidAttemptToDismiss:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateStyle;
- (id)pinInstructionsPrompt;

@end
