@class NSArray, SXComponentTextRules, SXComponentLayoutRules;

@interface SXComponentClassification : NSObject

@property (readonly, nonatomic) NSArray *defaultStyleIdentifiers;
@property (readonly, nonatomic) SXComponentLayoutRules *layoutRules;
@property (readonly, nonatomic) SXComponentTextRules *textRules;
@property (readonly, nonatomic) NSArray *defaultTextStyleIdentifiers;
@property (readonly, nonatomic) NSArray *defaultComponentStyleIdentifiers;
@property (readonly, nonatomic) unsigned long long contentRelevance;

+ (void)initialize;
+ (id)roleString;
+ (id)typeString;
+ (int)role;
+ (BOOL)shouldRegister;
+ (id)classificationForComponentWithRole:(int)a0;
+ (id)classificationForComponentWithType:(id)a0;
+ (id)classificationForComponentWithType:(id)a0 role:(id)a1;
+ (void)registerClassification;

- (id)init;
- (id)accessibilityContextualLabel;
- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;
- (BOOL)accessibilitySkippedDuringReadAll;
- (void).cxx_destruct;
- (id)accessibilityCustomRotorMembership;
- (Class)componentModelClass;
- (BOOL)isCollapsible;
- (void)setupStyleIdentifiers;

@end
