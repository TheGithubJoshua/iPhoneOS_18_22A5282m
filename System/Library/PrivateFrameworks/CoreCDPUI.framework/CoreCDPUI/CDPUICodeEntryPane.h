@class UIButton, CDPUICodeEntryViewModel;

@interface CDPUICodeEntryPane : CDPPassphraseEntryPane {
    UIButton *_footerButton;
    CDPUICodeEntryViewModel *_viewModel;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setViewModel:(id)a0;
- (id)_createFooterButton;
- (void)didFinishResizingHeaderView;
- (void)didFinishResizingPinView;

@end
