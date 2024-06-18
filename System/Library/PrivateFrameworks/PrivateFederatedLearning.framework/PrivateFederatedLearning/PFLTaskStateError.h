@class NSError;

@interface PFLTaskStateError : NSObject <PFLTaskState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSError *error;

- (id)initWithCoder:(id)a0;
- (unsigned long long)tag;
- (void)suspend;
- (id)initWithError:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)resume:(id)a0 completion:(id /* block */)a1;

@end
