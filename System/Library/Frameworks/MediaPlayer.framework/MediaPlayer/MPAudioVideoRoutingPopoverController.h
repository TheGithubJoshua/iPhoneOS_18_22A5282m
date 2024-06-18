@class NSString, MPAVRoutingViewController;

@interface MPAudioVideoRoutingPopoverController : UIPopoverController <MPAVRoutingViewControllerDelegate> {
    int _airPlayPasswordAlertDidAppearToken;
    BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
    BOOL _mirroringIncluded;
    MPAVRoutingViewController *_routingViewController;
}

@property (nonatomic) BOOL mirroringOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithType:(long long)a0;
- (id)routingController;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithContentViewController:(id)a0;
- (id)initWithType:(long long)a0 includeMirroring:(BOOL)a1;
- (void)routingViewController:(id)a0 didPickRoute:(id)a1;
- (void)routingViewControllerDidUpdateContents:(id)a0;

@end
