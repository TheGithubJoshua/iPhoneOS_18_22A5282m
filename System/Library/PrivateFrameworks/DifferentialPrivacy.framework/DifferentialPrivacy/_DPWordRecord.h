@class NSNumber, NSString;

@interface _DPWordRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *wordPosition;
@property (readonly, copy, nonatomic) NSString *word;

+ (id)sequenceAndFragmentsFrom:(id)a0 fragmentLimit:(unsigned long long)a1 fragmentWidth:(unsigned long long)a2 puzzlePieceCount:(unsigned long long)a3;
+ (id)bogusCharacter;
+ (id)word:(id)a0 atPosition:(id)a1;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithWord:(id)a0 atPosition:(id)a1;
- (BOOL)isEqualToWordRecord:(id)a0;
- (id)sequenceWithoutPadding;

@end
