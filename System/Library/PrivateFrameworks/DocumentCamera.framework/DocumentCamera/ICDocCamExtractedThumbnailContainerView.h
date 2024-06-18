@protocol ICDocCamExtractedThumbnailContainerViewDelegate;

@interface ICDocCamExtractedThumbnailContainerView : UIView

@property (weak, nonatomic) id<ICDocCamExtractedThumbnailContainerViewDelegate> delegate;

- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)accessibilityCustomActions;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (BOOL)orderNextForAccessibility:(id)a0;
- (BOOL)orderPreviousForAccessibility:(id)a0;

@end
