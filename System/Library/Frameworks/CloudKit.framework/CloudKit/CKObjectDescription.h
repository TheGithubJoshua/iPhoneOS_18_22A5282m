@class NSString, CKOrderedDictionary;

@interface CKObjectDescription : NSObject

@property (readonly, nonatomic) BOOL redact;
@property (readonly, nonatomic) BOOL avoidShortDescription;
@property (retain, nonatomic) NSString *descriptionPrefix;
@property (retain, nonatomic) CKOrderedDictionary *orderedDictionary;
@property (nonatomic) BOOL printAsDictionary;

- (id)_propertyDescriptionForProperty:(id)a0 shouldRedact:(BOOL)a1;
- (id)initWithObject:(id)a0 redact:(BOOL)a1 avoidShortDescription:(BOOL)a2;
- (void)addPropertyIfExists:(id)a0 value:(id)a1 shouldRedact:(BOOL)a2;
- (void)_addProperty:(id)a0 value:(id)a1 shouldRedact:(BOOL)a2;
- (id)initWithObject:(id)a0 redact:(BOOL)a1;
- (void).cxx_destruct;
- (id)description;
- (id)unorderedDictionary;
- (id)_dictionaryDescription:(id)a0 shouldRedact:(BOOL)a1;
- (void)addFlagsForKey:(id)a0 flagsAndConditions:(id)a1;
- (void)addProperty:(id)a0 value:(id)a1 shouldRedact:(BOOL)a2;
- (id)_arrayDescription:(id)a0 shouldRedact:(BOOL)a1;

@end
