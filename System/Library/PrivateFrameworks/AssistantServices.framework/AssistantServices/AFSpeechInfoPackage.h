@class AFVoiceCommandGrammarParsePackage;

@interface AFSpeechInfoPackage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) AFVoiceCommandGrammarParsePackage *commandGrammarParsePackage;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCommandGrammarParsePackage:(id)a0;

@end
