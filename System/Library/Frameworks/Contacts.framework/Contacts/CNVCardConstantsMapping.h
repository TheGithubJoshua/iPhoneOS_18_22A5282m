@class NSDictionary;

@interface CNVCardConstantsMapping : NSObject

@property (retain, nonatomic) NSDictionary *mapping;

+ (id)CNToVCardInstantMessageConstantsMapping;
+ (id)CNToVCardSocialProfileConstantsMapping;
+ (id)vCardToCNInstantMessageConstantsMapping;
+ (id)vCardToCNSocialProfileConstantsMapping;

- (id)initWithMapping:(id)a0;
- (void).cxx_destruct;
- (id)mappedConstant:(id)a0;
- (id)invertedMapping;

@end
