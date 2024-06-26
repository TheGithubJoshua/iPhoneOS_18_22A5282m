@class UIScrollView;

@interface UIAccessibilityAutoscrollManager : NSObject

@property (nonatomic, getter=isAutoscrolling) BOOL autoscrolling;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) id targetToScroll;
@property (nonatomic) unsigned long long scrollDirection;
@property (nonatomic) double autoscrollSpeed;

+ (id)sharedInstance;

- (id)init;
- (void)pause;
- (void)scrollToTop;
- (void).cxx_destruct;
- (BOOL)_autoscroll;
- (BOOL)autoscrollInDirection:(unsigned long long)a0;
- (unsigned long long)availableAutoscrollDirections;
- (void)decrementAutoscrollSpeed;
- (void)incrementAutoscrollSpeed;
- (void)scrollToBottom;

@end
