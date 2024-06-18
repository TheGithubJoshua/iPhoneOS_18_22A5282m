@class SIRINLUEXTERNALCDMNluResponse, AFVoiceCommandGrammarParsePackage;

@interface AFDictationNLUResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SIRINLUEXTERNALCDMNluResponse *nluResponse;
@property (retain, nonatomic) AFVoiceCommandGrammarParsePackage *commandGrammarParsePackage;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
