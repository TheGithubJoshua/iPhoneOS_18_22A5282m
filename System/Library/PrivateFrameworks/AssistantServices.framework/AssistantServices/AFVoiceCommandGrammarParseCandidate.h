@class NSString, NSDictionary;

@interface AFVoiceCommandGrammarParseCandidate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *commandId;
@property (readonly, nonatomic) BOOL isComplete;
@property (readonly, copy, nonatomic) NSDictionary *paramMatches;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCommandId:(id)a0 isComplete:(BOOL)a1 paramMatches:(id)a2;

@end
