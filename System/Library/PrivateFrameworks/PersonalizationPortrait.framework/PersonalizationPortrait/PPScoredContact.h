@class NSArray, PPContact;

@interface PPScoredContact : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PPContact *contact;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) unsigned char flags;
@property (readonly, nonatomic) NSArray *scoredPhoneNumbers;
@property (readonly, nonatomic) NSArray *scoredEmailAddresses;
@property (readonly, nonatomic) NSArray *scoredSocialProfiles;
@property (readonly, nonatomic) NSArray *scoredPostalAddresses;

+ (id)scoredContactWithContact:(id)a0 scoredPhoneNumbers:(id)a1 scoredEmailAddresses:(id)a2 scoredSocialProfiles:(id)a3 scoredPostalAddresses:(id)a4 score:(double)a5 flags:(unsigned char)a6;

- (id)initWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (long long)reverseCompare:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContact:(id)a0 scoredPhoneNumbers:(id)a1 scoredEmailAddresses:(id)a2 scoredSocialProfiles:(id)a3 scoredPostalAddresses:(id)a4 score:(double)a5 flags:(unsigned char)a6;
- (BOOL)isEqualToScoredContact:(id)a0;

@end
