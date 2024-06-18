@class UILabel, NSAttributedString;

@interface TUIEmojiSearchResultCollectionViewCell : UICollectionViewCell {
    UILabel *_animationFromLabel;
    UILabel *_animationToLabel;
    unsigned long long _nestedAnimationCount;
}

@property (readonly, nonatomic) UILabel *emojiLabel;
@property (retain, nonatomic) NSAttributedString *displayedEmojiString;

+ (id)reuseIdentifier;
+ (id)_createEmojiLabel;

- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setDisplayedEmojiString:(id)a0 animated:(BOOL)a1 withAnimationOffset:(unsigned long long)a2;

@end
