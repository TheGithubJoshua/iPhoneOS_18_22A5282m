@class RUIStyle;

@interface RUIModalPresentationController : _UIFormSheetPresentationController {
    RUIStyle *_style;
}

@property (nonatomic, setter=setRUIModalPresentationStyle:) unsigned long long ruiModalPresentationStyle;

- (unsigned long long)modalPresentationStyle;
- (void).cxx_destruct;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (double)_sheetHeightWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1 modalPresentationStyle:(unsigned long long)a2;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1 modalPresentationStyle:(unsigned long long)a2 style:(id)a3;

@end
