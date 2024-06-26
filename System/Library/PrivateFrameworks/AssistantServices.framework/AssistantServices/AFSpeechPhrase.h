@class NSArray;

@interface AFSpeechPhrase : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *interpretations;
@property (nonatomic) BOOL isLowConfidence;

- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)bestInterpretation;
- (id)initWithInterpretations:(id)a0 isLowConfidence:(BOOL)a1;
- (id)allInterpretationStringsAndScores;
- (id)firstInterpretation;

@end
