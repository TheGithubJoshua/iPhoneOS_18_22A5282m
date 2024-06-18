@protocol PREditingLookViewProviding;

@interface PREditorCombinedRootViewController : PREditorRootViewController

@property (retain, nonatomic) id<PREditingLookViewProviding> views;

- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;

@end
