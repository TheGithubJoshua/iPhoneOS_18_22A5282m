@class SBKStoreURLBagContext;

@interface SBKRequestHandler : NSObject

@property (readonly, nonatomic) SBKStoreURLBagContext *bagContext;

- (void)cancel;
- (id)initWithBagContext:(id)a0;
- (void).cxx_destruct;
- (void)timeout;

@end
