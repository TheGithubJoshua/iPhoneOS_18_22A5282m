@class UIButton, _UISlotView;

@interface _UIUCBBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider {
    UIButton *_contentButton;
    _UISlotView *_securePasteButtonSlotView;
    BOOL _slotViewHasRemoteContent;
    id /* block */ _menuProvider;
}

+ (id)_defaultTitleAttributes;

- (id)pointerShapeInContainer:(id)a0;
- (id)buttonContextMenuInteractionConfiguration;
- (id)_defaultTitleAttributes;
- (id)buttonContextMenuTargetedPreview;
- (struct CGPoint { double x0; double x1; })menuAnchorPoint;
- (long long)_securePasteButtonSite;
- (void).cxx_destruct;
- (id)buttonContextMenuStyleFromDefaultStyle:(id)a0;
- (id)contentView;
- (id)imageSymbolConfiguration;
- (id)_newButtonSecure:(BOOL)a0 orDictation:(BOOL)a1;
- (void)enableSecureButton:(BOOL)a0;
- (void)configureButton:(id)a0 withAppearanceDelegate:(id)a1 fromBarItem:(id)a2;
- (BOOL)shouldSuppressPointerSpecularFilter;
- (void)updateButton:(id)a0 forEnabledState:(BOOL)a1;
- (void)updateButton:(id)a0 forHighlightedState:(BOOL)a1;
- (void)updateSecureButton;
- (void)updateMenu;
- (BOOL)canUpdateMenuInPlace;
- (void)_configureImageOrTitleFromBarItem:(id)a0;

@end
