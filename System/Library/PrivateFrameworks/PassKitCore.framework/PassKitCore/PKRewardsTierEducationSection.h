@class NSString;

@interface PKRewardsTierEducationSection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long tier;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTier:(unsigned long long)a0 localizedTitle:(id)a1 localizedSubtitle:(id)a2;

@end
