@class NSNumber, ASSettingsTaskOofResponse, ASSettingsTaskUserInformationResponse;

@interface ASSettingsTaskResponse : ASItem

@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) ASSettingsTaskUserInformationResponse *userInformation;
@property (retain, nonatomic) ASSettingsTaskOofResponse *oof;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (void).cxx_destruct;
- (id)description;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;

@end
