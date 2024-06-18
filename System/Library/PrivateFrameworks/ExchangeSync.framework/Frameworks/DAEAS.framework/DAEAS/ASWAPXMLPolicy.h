@class NSString;

@interface ASWAPXMLPolicy : ASPolicy {
    NSString *_data;
}

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (id)data;
- (void)_setData:(id)a0;
- (void).cxx_destruct;
- (id)_policyForWAPProvisioningXMLData;
- (id)_wbxmlPolicyDict;
- (id)perDomainDictsForPolicy;

@end
