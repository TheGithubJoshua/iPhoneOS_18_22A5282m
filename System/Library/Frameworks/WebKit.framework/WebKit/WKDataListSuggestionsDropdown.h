@class NSString;

@interface WKDataListSuggestionsDropdown : WKDataListSuggestionsControl <UIContextMenuInteractionDelegate> {
    struct RetainPtr<NSArray<UIMenuElement *>> { void *m_ptr; } _suggestionsMenuElements;
    struct RetainPtr<UIContextMenuInteraction> { void *m_ptr; } _suggestionsContextMenuInteraction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (id).cxx_construct;
- (void)invalidate;
- (void).cxx_destruct;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configuration:(id)a1 highlightPreviewForItemWithIdentifier:(id)a2;
- (void)_displayWithActivationType:(unsigned char)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_preferredEdgeInsetsForSuggestionsMenu;
- (void)_removeContextMenuInteraction;
- (void)_showSuggestions;
- (void)_suggestionsMenuDidDismiss;
- (void)_suggestionsMenuDidPresent;
- (void)_updateSuggestionsMenuElements;
- (void)_updateTextSuggestions;
- (void)didSelectOptionAtIndex:(long long)a0;
- (id)initWithInformation:(void *)a0 inView:(id)a1;
- (void)showSuggestionsDropdown:(void *)a0 activationType:(unsigned char)a1;
- (void)updateWithInformation:(void *)a0;

@end
