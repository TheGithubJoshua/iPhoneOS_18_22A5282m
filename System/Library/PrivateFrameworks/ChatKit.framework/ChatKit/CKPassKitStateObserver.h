@interface CKPassKitStateObserver : NSObject

@property (nonatomic) BOOL passKitUIPresented;
@property (nonatomic) BOOL iTunesStoreDialogPresented;

+ (id)sharedInstance;

- (id)init;
- (id)description;
- (void)dealloc;
- (void)_iTunesStoreDialogDidDismiss;
- (void)_iTunesStoreDialogWillDisplay;
- (void)_passKitUIDismissed;
- (void)_passKitUIPresented;
- (void)prepareForResume;

@end
