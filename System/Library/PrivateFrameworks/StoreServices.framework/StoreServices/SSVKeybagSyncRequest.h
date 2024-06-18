@class NSNumber, NSString;

@interface SSVKeybagSyncRequest : SSRequest <SSXPCCoding>

@property (readonly, nonatomic) NSNumber *accountIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyXPCEncoding;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccountIdentifier:(id)a0;

@end
