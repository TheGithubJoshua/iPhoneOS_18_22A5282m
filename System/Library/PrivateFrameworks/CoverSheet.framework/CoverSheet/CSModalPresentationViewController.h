@protocol BSInvalidatable;

@interface CSModalPresentationViewController : CSPresentationViewController {
    id<BSInvalidatable> _stateCaptureBlock;
}

- (id)init;
- (void)_addStateCaptureHandlers;
- (void).cxx_destruct;
- (void)dealloc;

@end
