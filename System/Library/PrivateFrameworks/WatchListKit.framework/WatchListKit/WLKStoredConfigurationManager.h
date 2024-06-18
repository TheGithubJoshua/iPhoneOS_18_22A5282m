@class WLKStoredConfiguration;

@interface WLKStoredConfigurationManager : NSObject

@property (retain, nonatomic) WLKStoredConfiguration *storedConfiguration;

+ (id)sharedInstance;

- (id)init;
- (void)_handleLibraryChange:(id)a0;
- (void).cxx_destruct;
- (void)_invalidateWithReason:(id)a0;
- (void)_setStoredConfiguration:(id)a0;
- (void)dealloc;
- (void)_updateConfiguration:(id)a0;
- (void)_handleAccountChange:(id)a0;

@end
