@class NUSetting;

@interface NUArraySetting : NUSetting

@property (readonly) NUSetting *content;

+ (id)supportedAttributes;
+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;

- (BOOL)isValid:(out id *)a0;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (id)serialize:(id)a0 error:(out id *)a1;
- (BOOL)validate:(id)a0 error:(out id *)a1;
- (id)initWithAttributes:(id)a0;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (BOOL)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
- (id)makeJSValue:(id)a0 context:(id)a1 error:(out id *)a2;
- (id)init;
- (id)copy:(id)a0;
- (id)initWithContent:(id)a0 attributes:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)copyArray:(id)a0;

@end
