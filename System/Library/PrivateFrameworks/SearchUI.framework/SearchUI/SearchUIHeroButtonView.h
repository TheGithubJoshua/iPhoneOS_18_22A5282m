@class SFButtonItem, SearchUICardSectionRowModel;
@protocol SearchUIFeedbackDelegate;

@interface SearchUIHeroButtonView : UIButton

@property (retain, nonatomic) SFButtonItem *buttonItem;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (weak, nonatomic) SearchUICardSectionRowModel *rowModel;

- (id)init;
- (struct CGPoint { double x0; double x1; })menuAttachmentPointForConfiguration:(id)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)tlk_updateForAppearance:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setText:(id)a0;
- (void)setSFImage:(id)a0;

@end
