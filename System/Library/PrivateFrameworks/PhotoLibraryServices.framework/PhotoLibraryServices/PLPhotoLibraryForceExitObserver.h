@interface PLPhotoLibraryForceExitObserver : NSObject

+ (id)sharedInstance;

- (void)_photoLibraryForceClientExitNotification;
- (id)init;
- (void)_photoLibraryCorruptNotification;
- (void)dealloc;

@end
