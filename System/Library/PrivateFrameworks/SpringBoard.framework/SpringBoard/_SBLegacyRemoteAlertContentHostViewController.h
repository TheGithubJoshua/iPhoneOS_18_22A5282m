@class NSString;

@interface _SBLegacyRemoteAlertContentHostViewController : _UIRemoteViewController <SBSUIRemoteAlertItemContentHostInterface> {
    BOOL _serviceHasSetPreferredContentSize;
}

@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) NSString *serviceClassName;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)_canShowWhileLocked;
- (void)_getPreferredContentSizeWithReplyBlock:(id /* block */)a0;

@end
