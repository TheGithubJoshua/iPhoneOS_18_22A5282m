@class NSString, NSDictionary;

@interface WBSUserAgentQuirksSnapshot : NSObject <WBSRemotePlistSnapshot> {
    NSDictionary *_domainsToQuirkTypes;
    NSDictionary *_userAgentQuirks;
    NSDictionary *_sitesRequiringUserAgentQuirks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)plistDataWithFormat:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithPlistData:(id)a0 error:(id *)a1;
- (id)quirkTypeForDomain:(id)a0;

@end
