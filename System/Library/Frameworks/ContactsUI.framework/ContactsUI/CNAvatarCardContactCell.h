@class UIImageView;

@interface CNAvatarCardContactCell : CNAvatarCardActionCell

@property (retain, nonatomic) UIImageView *contactImageView;

- (void)_updateFonts;
- (void)awakeFromNib;
- (void)reloadData;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)moreHighlighted;

@end
