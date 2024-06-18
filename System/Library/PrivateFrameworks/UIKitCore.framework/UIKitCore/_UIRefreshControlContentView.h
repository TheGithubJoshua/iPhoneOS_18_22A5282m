@class UIColor, UIImpactFeedbackGenerator, NSAttributedString, UIRefreshControl;

@interface _UIRefreshControlContentView : UIView

@property (readonly, nonatomic) long long style;
@property (nonatomic) UIRefreshControl *refreshControl;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, nonatomic) double minimumSnappingHeight;
@property (readonly, nonatomic) double maximumSnappingHeight;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;

- (void)_removeAllAnimations;
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (void).cxx_destruct;
- (void)willTransitionFromState:(long long)a0 toState:(long long)a1;
- (void)didTransitionFromState:(long long)a0 toState:(long long)a1;
- (void)refreshControlInvalidatedSnappingHeight;

@end
