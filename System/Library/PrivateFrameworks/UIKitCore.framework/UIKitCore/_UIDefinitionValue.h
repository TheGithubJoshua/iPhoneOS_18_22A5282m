@class NSString, NSAttributedString, MAAsset;

@interface _UIDefinitionValue : NSObject

@property (readonly) NSString *localizedDictionaryName;
@property (readonly) NSString *term;
@property (readonly) NSAttributedString *definition;
@property (readonly) NSString *longDefinition;
@property (retain, nonatomic) MAAsset *rawAsset;

- (void).cxx_destruct;
- (id)description;
- (id)initWithLocalizedDictionaryName:(id)a0 term:(id)a1 definition:(id)a2 longDefinition:(id)a3;

@end
