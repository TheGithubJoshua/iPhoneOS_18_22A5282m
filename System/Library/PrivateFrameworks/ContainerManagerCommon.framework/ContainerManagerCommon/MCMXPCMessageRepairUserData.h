@class NSURL;

@interface MCMXPCMessageRepairUserData : MCMXPCMessageBase <MCMParametersRepairUserData>

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) char *sandboxToken;

- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;
- (void)dealloc;
- (unsigned int)disposition;

@end
