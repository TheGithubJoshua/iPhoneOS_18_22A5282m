@class NSString;

@interface WBSWebExtensionDeclarativeNetRequestRuleset : NSObject

@property (readonly, copy, nonatomic) NSString *rulesetID;
@property (nonatomic) BOOL enabled;
@property (readonly, copy, nonatomic) NSString *jsonPath;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)description;

@end
