@class NSString, MPAVRoutingController, MPAudioVideoRoutingPopoverController, MPAVRoutingSheet, UIWebDocumentView;

@interface UIWebPlaybackTargetPicker : UIView <UIPopoverControllerDelegate> {
    MPAVRoutingController *_routingController;
    MPAudioVideoRoutingPopoverController *_popoverController;
    MPAVRoutingSheet *_actionSheet;
    UIWebDocumentView *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_windowDidRotate:(id)a0;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)showAirPlayPickerIPad:(long long)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_dismissAirPlayRoutePickerIPad;
- (void)_presentAirPlayPopoverAnimated:(BOOL)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_windowWillRotate:(id)a0;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (void)show:(BOOL)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)showAirPlayPickerIPhone:(long long)a0;

@end