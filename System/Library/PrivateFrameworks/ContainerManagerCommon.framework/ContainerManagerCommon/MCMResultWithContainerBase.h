@class MCMError, NSUUID, NSString, MCMPOSIXUser, NSURL, NSDictionary, NSArray;

@interface MCMResultWithContainerBase : MCMResultBase <MCMResultWithContainer>

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *containerPathIdentifier;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) MCMPOSIXUser *posixUser;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic) char *sandboxToken;
@property (readonly, nonatomic) BOOL existed;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSDictionary *info;
@property (readonly, nonatomic) NSArray *resolvedLinks;
@property (readonly, nonatomic) BOOL transient;
@property (readonly, nonatomic) MCMError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUUID:(id)a0 containerPathIdentifier:(id)a1 identifier:(id)a2 containerClass:(unsigned long long)a3 POSIXUser:(id)a4 personaUniqueString:(id)a5 sandboxToken:(const char *)a6 existed:(BOOL)a7 url:(id)a8 info:(id)a9 resolvedLinks:(id)a10 transient:(BOOL)a11;
- (id)initWithMetadata:(id)a0 sandboxToken:(const char *)a1 includePath:(BOOL)a2 includeInfo:(BOOL)a3 resolvedLinks:(id)a4;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)encodeResultOntoReply:(id)a0;
- (id)initWithContainerPath:(id)a0 containerIdentity:(id)a1 uuid:(id)a2 sandboxToken:(const char *)a3 includePath:(BOOL)a4;

@end
