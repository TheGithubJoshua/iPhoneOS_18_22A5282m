@interface GKRandomSource : NSObject <GKRandom, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)sharedRandom;
+ (id)systemRandom;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;
- (id)arrayByShufflingObjectsInArray:(id)a0;
- (long long)nextInt;
- (BOOL)nextBool;
- (float)nextUniform;

@end
