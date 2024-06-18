@class NSString;

@interface ASPolicy : ASItem {
    NSString *_type;
    NSString *_key;
    NSString *_status;
}

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (id)key;
- (void)_setType:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)_setStatus:(id)a0;
- (int)status;
- (id)type;
- (void)_setKey:(id)a0;
- (id)perDomainDictsForPolicy;

@end
