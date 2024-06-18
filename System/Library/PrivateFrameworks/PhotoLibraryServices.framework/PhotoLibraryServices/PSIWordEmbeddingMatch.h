@class NSString;

@interface PSIWordEmbeddingMatch : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *word;
@property (readonly) NSString *extendedWord;
@property (readonly) double score;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithWord:(id)a0 extendedWord:(id)a1 score:(double)a2;

@end
