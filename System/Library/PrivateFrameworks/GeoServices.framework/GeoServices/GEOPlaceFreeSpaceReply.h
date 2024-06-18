@class NSString;

@interface GEOPlaceFreeSpaceReply : GEOXPCReply <GEOXPCReply>

@property (nonatomic) unsigned long long freedBytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeToXPCDictionary:(id)a0;
- (BOOL)isValid;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;

@end
