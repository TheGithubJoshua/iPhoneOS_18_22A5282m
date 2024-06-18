@class NSString, SPUIResultsViewController;
@protocol SPUIViewControllerDelegate;

@interface SPUIViewController : UIViewController <SPUIResultsViewDelegate, SearchUIResultsViewDelegate, SearchUICommandDelegate, SFFeedbackListener>

@property (retain) SPUIResultsViewController *searchResultViewController;
@property (weak, nonatomic) id<SPUIViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isFeedbackSelector:(SEL)a0;

- (void)didUpdateActiveViewController;
- (void)willUpdateActiveViewController;
- (id)init;
- (void)didTapInEmptyRegion;
- (void)activateViewController:(id)a0 animate:(BOOL)a1;
- (void)willUpdateFromResultsWithHighlightedResult:(id)a0 viewController:(id)a1;
- (id)viewControllerForPresenting;
- (id)currentQuery;
- (id)activeViewController;
- (id)contentScrollView;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;

@end
