@class NSURL;

@interface PFLTaskStateCompilingModel : NSObject <PFLTaskState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *modelURL;

- (id)initWithCoder:(id)a0;
- (unsigned long long)tag;
- (void)suspend;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithModelURL:(id)a0;
- (void)resume:(id)a0 completion:(id /* block */)a1;

@end
