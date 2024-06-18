@class AVOutputDevice;

@interface MRUPairingAuthorizationRequest : NSObject

@property (readonly, nonatomic) AVOutputDevice *outputDevice;

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithOutputDevice:(id)a0;
- (void)completeWithPasscode:(id)a0;

@end
