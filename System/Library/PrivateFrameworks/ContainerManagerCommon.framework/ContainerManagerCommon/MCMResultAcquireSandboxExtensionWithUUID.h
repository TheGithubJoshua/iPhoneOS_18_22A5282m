@class NSURL, NSString;

@interface MCMResultAcquireSandboxExtensionWithUUID : MCMResultBase

@property (readonly, nonatomic) const char *sandboxToken;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *personaUniqueString;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)encodeResultOntoReply:(id)a0;
- (id)initWithSandboxToken:(const char *)a0 personaUniqueString:(id)a1 url:(id)a2;

@end
