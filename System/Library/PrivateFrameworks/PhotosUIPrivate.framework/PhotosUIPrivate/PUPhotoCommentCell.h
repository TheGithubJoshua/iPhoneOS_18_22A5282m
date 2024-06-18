@class UITextView, PLCloudSharedComment, UILabel, UIView;

@interface PUPhotoCommentCell : UITableViewCell

@property (readonly, retain, nonatomic) UITextView *commentContentTextView;
@property (readonly, retain, nonatomic) UILabel *commentBylineLabel;
@property (readonly, retain, nonatomic) UIView *styledSeparatorView;
@property (copy, nonatomic) PLCloudSharedComment *comment;
@property (nonatomic) BOOL usesCompactSeparators;

+ (Class)layerClass;
+ (id)_attributionStringForComment:(id)a0;
+ (id)_commentStringForComment:(id)a0;
+ (id)_synthesizedAttributedString:(id)a0 withWordWrapping:(BOOL)a1;
+ (double)heightForComment:(id)a0 forWidth:(double)a1 forInterfaceOrientation:(long long)a2;

- (void)_updateContent;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)layoutSubviews;
- (void)delete:(id)a0;

@end
