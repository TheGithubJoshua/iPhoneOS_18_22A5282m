@class NSString;

@interface GEOPlaceFreeSpaceRequest : GEOXPCRequest <GEOXPCRequest>

@property (nonatomic) unsigned long long freeBytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)replyClass;

- (BOOL)expectsReply;
- (id)initWithTraits:(id)a0 auditToken:(id)a1 throttleToken:(id)a2;
- (void)encodeToXPCDictionary:(id)a0;
- (BOOL)isValid;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;

@end
