@class NSDictionary;

@interface CNiOSABConstantsMapping : NSObject

@property (retain, nonatomic) NSDictionary *mapping;
@property (retain, nonatomic) id defaultConstant;

+ (id)CNToABPersonSortOrderingConstantsMapping;
+ (id)ABToCNPersonInstantMessageConstantsMapping;
+ (id)CNToABPersonShortNameFormatConstantsMapping;
+ (id)ABToCNContainerTypeConstantsMapping;
+ (id)CNToABSourceTypeConstantsMapping;
+ (id)CNToABPersonKindConstantsMapping;
+ (id)ABToCNPersonAddressConstantsMapping;
+ (id)CNToABPersonInstantMessageConstantsMapping;
+ (id)ABToCNPersonKindConstantsMapping;
+ (id)CNToABPersonAddressConstantsMapping;
+ (id)CNToABPersonSocialProfileConstantsMapping;
+ (id)ABtoCNContactDisplayNameOrderConstantsMapping;
+ (id)CNToABCompositeNameFormatConstantsMapping;
+ (id)CNToABLabelConstantsMapping;
+ (id)ABToCNLabelConstantsMapping;
+ (id)ABToCNContactSortOrderConstantsMapping;
+ (id)ABToCNContactShortNameFormatConstantsMapping;
+ (id)ABToCNPersonSocialProfileConstantsMapping;

- (id)initWithMapping:(id)a0;
- (void).cxx_destruct;
- (id)mappedConstant:(id)a0;
- (id)invertedMapping;

@end
