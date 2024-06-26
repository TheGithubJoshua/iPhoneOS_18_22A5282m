@class UILongPressGestureRecognizer, UIContextMenuInteraction, _UITextInteractableItem, UITapGestureRecognizer;

@interface _UITextSimpleLinkInteraction : UITextLinkInteraction {
    UITapGestureRecognizer *_linkTap;
    UILongPressGestureRecognizer *_highlighter;
    _UITextInteractableItem *_highlightedItem;
    BOOL _presentingFromSimpleTap;
}

@property (readonly, nonatomic) BOOL shouldProxyContextMenuDelegate;
@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction;

- (id)gesturesForFailureRequirements;
- (id)initWithShouldProxyContextMenuDelegate:(BOOL)a0;
- (BOOL)interaction_gestureRecognizerShouldBegin:(id)a0;
- (void)highlight:(id)a0;
- (id)textLinkInteractableView;
- (id)contextMenuDelegateProxy;
- (void).cxx_destruct;
- (id)itemInteractableView;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)_canBeginInteractionSessionForLinkAtPoint:(struct CGPoint { double x0; double x1; })a0 asTap:(BOOL)a1 precision:(unsigned long long)a2;
- (void)linkTapped:(id)a0;
- (BOOL)interaction_gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)_beginInteractionSessionForLinkAtPoint:(struct CGPoint { double x0; double x1; })a0 asTap:(BOOL)a1 precision:(unsigned long long)a2;
- (BOOL)_allowItemInteractions;

@end
