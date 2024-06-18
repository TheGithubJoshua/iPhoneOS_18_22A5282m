@class NSData;
@protocol LAContextExternalizationProt, LAContextExternalizationObserverProt;

@interface LACachedExternalizedContext : NSObject {
    id<LAContextExternalizationProt> _externalizationDelegate;
}

@property (retain) NSData *cachedExternalizedContext;
@property (readonly, nonatomic) NSData *externalizedContext;
@property (weak, nonatomic) id<LAContextExternalizationObserverProt> externalizationObserver;

- (void)externalizedContextWithReply:(id /* block */)a0;
- (void).cxx_destruct;
- (id)externalizedContextWithError:(id *)a0;
- (id)initWithExternalizationDelegate:(id)a0;
- (id)initWithExternalizedContext:(id)a0;

@end
