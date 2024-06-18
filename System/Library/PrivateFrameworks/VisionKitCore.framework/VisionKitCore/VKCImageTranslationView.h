@class LTUIVisualTranslationView, VKCVisualSearchResult, UIView;

@interface VKCImageTranslationView : VKCImageBaseOverlayView

@property (retain, nonatomic) LTUIVisualTranslationView *visualTranslationView;
@property (weak, nonatomic) UIView *presentationAnchorView;
@property BOOL translationNeedsUpdate;
@property (retain, nonatomic) VKCVisualSearchResult *visualSearchResult;

- (void)checkForTranslationResultsWithCompletion:(id /* block */)a0;
- (id)init;
- (void)setRecognitionResult:(id)a0;
- (id)recognizedLines;
- (void).cxx_destruct;
- (void)showTranslationOverlay;
- (void)hideTranslationOverlay;

@end
