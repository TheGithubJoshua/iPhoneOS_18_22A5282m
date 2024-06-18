@class PLCloudSharedAlbum, PUPhotoStreamRecipientViewController, UIBarButtonItem;

@interface PUAddSubscribersViewController : UIViewController {
    PUPhotoStreamRecipientViewController *_composeRecipientController;
    UIBarButtonItem *_addButton;
}

@property (readonly, nonatomic) PLCloudSharedAlbum *album;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_keyboardWillShow:(id)a0;
- (id)contentScrollView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_dismiss;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)_cancelButtonHandler;
- (id)initWithSharedStream:(id)a0;
- (void)_saveAndDismiss;
- (void)_addButtonHandler;
- (BOOL)_validateRecipientsToAdd:(id)a0;
- (void)recipientViewController:(id)a0 didEnterText:(id)a1;
- (void)recipientViewControllerDidAddRecipient:(id)a0;
- (void)recipientViewControllerDidRemoveRecipient:(id)a0;

@end
