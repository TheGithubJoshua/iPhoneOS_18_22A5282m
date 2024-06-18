@class NSArray, NSMutableDictionary;

@interface CPLDerivativesFilter : NSObject <NSSecureCoding> {
    NSMutableDictionary *_skipInfoForAssetChange;
    NSMutableDictionary *_skipInfoForMasterChange;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *plistDescription;

- (id)initWithCoder:(id)a0;
- (id)_getTargetDictionaryForChangeType:(unsigned long long)a0;
- (id)init;
- (id)redactedDescription;
- (BOOL)shouldDropDerivativeWithDropDerivativeRecipe:(id)a0;
- (void)_enumerateDropDerivativeRules:(id)a0 ofType:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (BOOL)addServerDropDerivativesRecipes:(id)a0;
- (BOOL)isEmpty;
- (BOOL)addServerDropDerivativesRecipe:(id)a0;
- (id)_descriptionForStoredResponse:(id)a0 recordType:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)enumerateDropDerivativeRulesWithBlock:(id /* block */)a0;
- (void)reset;
- (BOOL)_isValidDropDerivativeRecipeWithUTI:(id)a0 sourceType:(unsigned long long)a1 derivativeTypes:(id)a2 changeType:(unsigned long long)a3;
- (BOOL)mightDropSomeDerivativesForSourceType:(unsigned long long)a0 forChangeType:(unsigned long long)a1;

@end
