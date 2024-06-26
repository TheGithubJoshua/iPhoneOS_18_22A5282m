@class NSString, _MKUILabel, NSLayoutConstraint;

@interface MKTransitMessageCell : MKCustomSeparatorCell {
    _MKUILabel *_messageLabel;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property (copy, nonatomic) NSString *messageText;

- (void)_contentSizeCategoryDidChange;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)a0;
- (void)_updateConstraintValues;

@end
