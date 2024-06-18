@interface NTKCTinCanSettings : NSObject

@property (readonly, nonatomic) BOOL tinCanEnabled;

+ (id)sharedInstance;

- (void)_notifyClientsOfChange;
- (id)init;
- (void)dealloc;
- (void)_handlePrefsChanged;
- (void)_readValue;

@end
