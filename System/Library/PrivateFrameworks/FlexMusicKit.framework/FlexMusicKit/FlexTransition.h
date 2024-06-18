@class NSString;

@interface FlexTransition : NSObject <NSCopying, NSDictionaryCoding>

@property (readonly, nonatomic) BOOL prevented;
@property (readonly, nonatomic) long long fadeOut;
@property (readonly, nonatomic) long long fadeIn;
@property (readonly, copy, nonatomic) NSString *transitionSegmentName;
@property (readonly, nonatomic) BOOL useNextSegmentForFadeOut;

+ (long long)validFadeLengthForLength:(long long)a0;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)encodeAsDictionary;
- (id)initWithTransitionSegmentNamed:(id)a0 prevented:(BOOL)a1 fadeOut:(long long)a2 fadeIn:(long long)a3 useNextSegmentForFadeOut:(BOOL)a4;
- (BOOL)isDefaultTransition;

@end
