@class NSArray, NSMutableSet, UIWindow;
@protocol VKFeedbackProviderViewControllerDelegate;

@interface VKFeedbackProviderViewController : UIViewController {
    NSArray *_attachments;
    unsigned long long _options;
    NSMutableSet *_selectedAttachments;
    UIWindow *_window;
}

@property (weak) id<VKFeedbackProviderViewControllerDelegate> delegate;

- (void)present;
- (void)loadView;
- (void)viewDidLoad;
- (void)_createContentView;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (id)_contentRowButtonWithTitle:(id)a0 tag:(long long)a1 allowToggle:(BOOL)a2;
- (void)_toggleContentRowButton:(id)a0;
- (id)initWithOptions:(unsigned long long)a0 attachments:(id)a1;

@end
