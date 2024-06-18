@class WBSCRDTGeneration, NSString, NSMutableDictionary;
@protocol NSCopying;

@interface WBSCRDTField : NSObject <NSCopying> {
    id _value;
    id _valueSource;
    id /* block */ _valueProvider;
    id /* block */ _valueUpdater;
    NSMutableDictionary *_metadata;
}

@property (copy, nonatomic) id<NSCopying> value;
@property (copy, nonatomic) WBSCRDTGeneration *generation;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (nonatomic) BOOL shouldIncrementGeneration;

- (id)init;
- (id)initWithValue:(id)a0 valueSource:(id)a1 valueProvider:(id /* block */)a2 valueUpdater:(id /* block */)a3 generation:(id)a4 deviceIdentifier:(id)a5;
- (id)initWithValueSource:(id)a0 valueProvider:(id /* block */)a1 valueUpdater:(id /* block */)a2 generation:(id)a3 deviceIdentifier:(id)a4;
- (id)copyWithValueSource:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setValue:(id)a0 incrementGenerationIfNeeded:(BOOL)a1;
- (long long)mergeWithField:(id)a0;
- (void)incrementGenerationIfNeeded;
- (void).cxx_destruct;
- (id)description;
- (id)objectForKeyedSubscript:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithValue:(id)a0 generation:(id)a1 deviceIdentifier:(id)a2;

@end
