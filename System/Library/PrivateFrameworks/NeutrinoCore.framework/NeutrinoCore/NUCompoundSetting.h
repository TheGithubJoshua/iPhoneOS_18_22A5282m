@class NSDictionary;

@interface NUCompoundSetting : NUSetting

@property (readonly) NSDictionary *properties;

+ (id)supportedAttributes;
+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;

- (BOOL)isValid:(out id *)a0;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (id)serialize:(id)a0 error:(out id *)a1;
- (id)initWithProperties:(id)a0 attributes:(id)a1;
- (BOOL)validate:(id)a0 error:(out id *)a1;
- (id)initWithAttributes:(id)a0;
- (void)enumerateProperties:(id /* block */)a0;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (BOOL)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
- (id)makeJSValue:(id)a0 context:(id)a1 error:(out id *)a2;
- (id)init;
- (id)modelForProperty:(id)a0;
- (id)copy:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
