@class NSString;

@interface AMSMonitoredAccountStoreProxy : NSProxy

@property (copy, nonatomic) NSString *mediaType;

- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithMediaType:(id)a0;

@end
