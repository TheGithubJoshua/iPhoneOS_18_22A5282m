@class UIContextMenuInteraction;
@protocol AVControlOverflowButtonDelegate;

@interface AVControlOverflowButton : AVButton {
    UIContextMenuInteraction *_activeMenuInteraction;
}

@property (weak, nonatomic) id<AVControlOverflowButtonDelegate> delegate;

+ (id)secondGenerationButton;
+ (id)firstGenerationButton;

- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)updateContextMenu;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void).cxx_destruct;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;

@end
