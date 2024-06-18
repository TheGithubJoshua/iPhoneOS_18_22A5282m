@class NSString, NSDictionary;

@interface FTGetRegionMetadataMessage : IDSBaseMessage <NSCopying>

@property (copy) NSString *language;
@property (copy) NSDictionary *responseRegionInformation;

- (long long)command;
- (id)bagKey;
- (id)messageBody;
- (id)init;
- (void)handleResponseDictionary:(id)a0;
- (long long)responseCommand;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsBinaryPush;
- (id)requiredKeys;
- (BOOL)wantsBagKey;
- (BOOL)wantsHTTPGet;
- (BOOL)wantsHTTPHeaders;

@end
