@protocol NFAccessoryTagDelegate;

@interface NFAccessoryTag : NSObject

@property (weak, nonatomic) id<NFAccessoryTagDelegate> delegate;

- (id)init;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
