@class COCluster;
@protocol COClusterAssertionDelegate;

@interface COClusterAssertion : NSObject

@property (readonly, weak, nonatomic) id<COClusterAssertionDelegate> delegate;
@property (readonly, nonatomic) COCluster *cluster;

+ (id)assertionForCluster:(id)a0 delegate:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_initWithCluster:(id)a0 delegate:(id)a1;
- (void)_notifyInvalidated;

@end
