@class NSString;

@interface SGMailIntelligenceMissingRecipientWarning : SGMailIntelligenceComposeWarning

@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) NSString *matchFoundInBCC;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSnippet:(id)a0 core:(id)a1 handle:(id)a2 signature:(id)a3 detectedLanguage:(id)a4 isIncomingMessage:(BOOL)a5 score:(id)a6 matchFoundInBCC:(id)a7;
- (id)initWithSnippet:(id)a0 core:(id)a1 score:(id)a2 matchFoundInBCC:(id)a3;
- (id)initWithSnippet:(id)a0 core:(id)a1 signature:(id)a2 detectedLanguage:(id)a3 isIncomingMessage:(BOOL)a4 score:(id)a5 matchFoundInBCC:(id)a6;
- (unsigned char)warningType;

@end
