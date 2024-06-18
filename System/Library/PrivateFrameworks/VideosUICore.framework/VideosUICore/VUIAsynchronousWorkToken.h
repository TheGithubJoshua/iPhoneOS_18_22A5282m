@class NSOperation;

@interface VUIAsynchronousWorkToken : NSObject

@property (retain, nonatomic) NSOperation *operation;

- (id)initWithOperation:(id)a0;
- (id)init;
- (void)cancel;
- (void).cxx_destruct;

@end
