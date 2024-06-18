@class NSMutableArray;

@interface TPPBPolicyDocument : PBCodable <NSCopying> {
    struct { unsigned char policyVersion : 1; } _has;
}

@property (nonatomic) BOOL hasPolicyVersion;
@property (nonatomic) unsigned long long policyVersion;
@property (retain, nonatomic) NSMutableArray *modelToCategorys;
@property (retain, nonatomic) NSMutableArray *categoriesByViews;
@property (retain, nonatomic) NSMutableArray *introducersByCategorys;
@property (retain, nonatomic) NSMutableArray *redactions;
@property (retain, nonatomic) NSMutableArray *keyViewMappings;
@property (retain, nonatomic) NSMutableArray *userControllableViews;
@property (retain, nonatomic) NSMutableArray *piggybackViews;
@property (retain, nonatomic) NSMutableArray *priorityViews;
@property (retain, nonatomic) NSMutableArray *inheritedExcludedViews;

+ (Class)categoriesByViewType;
+ (Class)inheritedExcludedViewsType;
+ (Class)introducersByCategoryType;
+ (Class)keyViewMappingType;
+ (Class)modelToCategoryType;
+ (Class)piggybackViewsType;
+ (Class)priorityViewsType;
+ (Class)redactionsType;
+ (Class)userControllableViewsType;

- (void)clearInheritedExcludedViews;
- (unsigned long long)categoriesByViewsCount;
- (void)addUserControllableViews:(id)a0;
- (void)addKeyViewMapping:(id)a0;
- (id)priorityViewsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void)clearRedactions;
- (id)userControllableViewsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (id)modelToCategoryAtIndex:(unsigned long long)a0;
- (void)addRedactions:(id)a0;
- (void)copyTo:(id)a0;
- (void)clearPriorityViews;
- (void)clearModelToCategorys;
- (unsigned long long)priorityViewsCount;
- (unsigned long long)userControllableViewsCount;
- (void)addCategoriesByView:(id)a0;
- (id)keyViewMappingAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (unsigned long long)keyViewMappingsCount;
- (void)addModelToCategory:(id)a0;
- (void)writeTo:(id)a0;
- (void)addInheritedExcludedViews:(id)a0;
- (void)addIntroducersByCategory:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)inheritedExcludedViewsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)modelToCategorysCount;
- (void)clearPiggybackViews;
- (id)redactionsAtIndex:(unsigned long long)a0;
- (unsigned long long)introducersByCategorysCount;
- (id)piggybackViewsAtIndex:(unsigned long long)a0;
- (id)categoriesByViewAtIndex:(unsigned long long)a0;
- (void)addPiggybackViews:(id)a0;
- (id)introducersByCategoryAtIndex:(unsigned long long)a0;
- (void)addPriorityViews:(id)a0;
- (unsigned long long)inheritedExcludedViewsCount;
- (void)clearUserControllableViews;
- (void)clearKeyViewMappings;
- (void)clearCategoriesByViews;
- (void)clearIntroducersByCategorys;
- (unsigned long long)redactionsCount;
- (unsigned long long)piggybackViewsCount;

@end
