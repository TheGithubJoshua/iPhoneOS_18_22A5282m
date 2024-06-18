@class SKInvocationQueueProxy, _UIAsyncInvocation, NSString, SKRemoteReviewViewController;
@protocol SKUIServiceReviewViewController;

@interface SKStoreReviewViewController : UIViewController <SKRemoteReviewViewControllerDelegate>

@property (retain, nonatomic) SKInvocationQueueProxy<SKUIServiceReviewViewController> *serviceProxy;
@property (retain, nonatomic) _UIAsyncInvocation *cancelRequest;
@property (retain, nonatomic) SKRemoteReviewViewController *remoteViewController;
@property (retain, nonatomic) NSString *reviewRequestToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_addRemoteView;
- (void)_requestRemoteViewController;
- (void)_didFinishWithResult:(unsigned long long)a0 error:(id)a1;
- (id)initWithReviewRequestToken:(id)a0;
- (void)remoteReviewViewControllerTerminatedWithError:(id)a0;

@end
