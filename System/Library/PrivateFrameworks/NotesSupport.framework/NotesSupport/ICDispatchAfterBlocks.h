@protocol NSCopying;

@interface ICDispatchAfterBlocks : NSObject

@property (copy, nonatomic) id<NSCopying> identifier;

- (id)initWithIdentifier:(id)a0;
- (void)performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelAll;
- (void)dispatchAfter:(double)a0 withBlock:(id /* block */)a1;

@end
