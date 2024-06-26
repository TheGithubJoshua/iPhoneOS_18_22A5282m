@class NSString, PXPhotosViewModel, PXUpdater, _PXPhotosBarButtonSpecManager, PXCuratedLibraryOverlayButton, UIBarButtonItem;

@interface _PXPhotosBarButtonView : UIView <PXChangeObserver>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long systemItem;
@property (readonly, nonatomic) NSString *systemIconImageName;
@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL action;
@property (readonly, nonatomic) SEL menuAction;
@property (readonly, nonatomic) _PXPhotosBarButtonSpecManager *specManager;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, nonatomic) PXCuratedLibraryOverlayButton *button;
@property (readonly, nonatomic) PXUpdater *updater;
@property (retain, nonatomic) id changeDeliveryHandle;
@property (weak, nonatomic) UIBarButtonItem *barButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleWillDisplayMenu;
- (id)initWithTitle:(id)a0 orSystemItem:(long long)a1 orSystemIconName:(id)a2 target:(id)a3 action:(SEL)a4 menuAction:(SEL)a5 specManager:(id)a6 viewModel:(id)a7;
- (void)_handleAction;
- (void)_handleWillDismissMenu;
- (void).cxx_destruct;
- (void)_resumeChangeDeliveryIfPossible;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_handleMenuAction;
- (void)dealloc;
- (id)_createButtonConfiguration;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)_updateButtons;
- (void)_invalidateButtons;
- (void)_pauseChangeDelivery;

@end
